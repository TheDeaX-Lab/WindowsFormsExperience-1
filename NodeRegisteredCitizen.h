#pragma once
#include "RegisteredCitizen.h"
struct node_registered_citizen {
	node_registered_citizen(registered_citizen* data, node_registered_citizen* pNext);

	node_registered_citizen();
	~node_registered_citizen();

	registered_citizen* data;
	node_registered_citizen* pNext;

	void print();

	node_registered_citizen* push_head(registered_citizen* data);
	node_registered_citizen* input();
	void clear();
	void save_file(std::ofstream* fout);
	registered_citizen* search_registered_citizen_by_all_data(std::string fio, int year, int month, int day, std::string target);
	node_registered_citizen* remove_registered_citizen(registered_citizen* data);
};

node_registered_citizen::node_registered_citizen(registered_citizen* data, node_registered_citizen* pNext) {
	this->data = data;
	this->pNext = pNext;
}

node_registered_citizen::node_registered_citizen() {
	this->data = NULL;
	this->pNext = NULL;
}

node_registered_citizen::~node_registered_citizen()
{
	delete this->data;
}

void node_registered_citizen::print()
{
	node_registered_citizen* temp = this;
	do {
		if (temp->data != NULL) {
			temp->data->print();
		}
		temp = temp->pNext;
	} while (temp != NULL);
}

node_registered_citizen* node_registered_citizen::push_head(registered_citizen* data)
{
	if (this->data == NULL) {
		this->data = data;
		return this;
	}
	else {
		node_registered_citizen* temp = new node_registered_citizen(data, this);
		return temp;
	}
}

node_registered_citizen* node_registered_citizen::input() {
	int n_registered_citizens;
	std::cout << "Введите количество зарегистрированных в данном доме: ";
	std::cin >> n_registered_citizens;
	node_registered_citizen* temp = this;
	for (int i = 0; i < n_registered_citizens; i++) {
		registered_citizen* tmp = new registered_citizen;
		tmp->input();
		temp = temp->push_head(tmp);
	}
	return temp;
}

void node_registered_citizen::clear()
{
	if (this->pNext != NULL) {
		this->pNext->clear();
	}
	delete this;
}

void node_registered_citizen::save_file(std::ofstream* fout) {
	node_registered_citizen* temp = this;
	do {
		registered_citizen* tmp = temp->data;
		if (tmp != NULL) {
			*fout << tmp->fio << '\n';
			*fout << tmp->birth.day << '\n';
			*fout << tmp->birth.month << '\n';
			*fout << tmp->birth.year << '\n';
			if (tmp->target == "") tmp->target = "n";
			*fout << tmp->target << "\n";
		}
		temp = temp->pNext;
	} while (temp != NULL);
}


registered_citizen* node_registered_citizen::search_registered_citizen_by_all_data(std::string fio, int year, int month, int day, std::string target) {
	node_registered_citizen* temp = this;
	do {
		registered_citizen* tmp = temp->data;
		if (tmp != NULL) {
			if (tmp->target == target && tmp->fio == fio && tmp->birth.day == day && tmp->birth.month == month && tmp->birth.year == year) {
				return tmp;
			}
		}
		temp = temp->pNext;
	} while (temp != NULL);
}

node_registered_citizen* node_registered_citizen::remove_registered_citizen(registered_citizen* data) {
	if (this->data == data) {
		node_registered_citizen* p = this->pNext;
		this->data = NULL;
		this->pNext = NULL;
		delete this;
		if (p == NULL) {
			p = new node_registered_citizen;
		}
		return p;
	}
	else {
		node_registered_citizen* temp = this;
		do {
			if (temp->pNext != NULL) {
				if (temp->pNext->data == data) {
					node_registered_citizen* p = temp->pNext;
					p->data = NULL;
					temp->pNext = p->pNext;
					p->pNext = NULL;
					delete p;
					break;
				}
			}
			temp = temp->pNext;
		} while (temp != NULL);
		return this;
	}
}