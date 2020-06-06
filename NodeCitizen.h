#pragma once
#include "Citizen.h"
struct node_citizen {
	~node_citizen();

	node_citizen(citizen* data, node_citizen* pNext);

	node_citizen(citizen* data);

	node_citizen();
	citizen* data;
	node_citizen* pNext;

	node_citizen* input();

	node_citizen* push_sorted(citizen* data);

	node_citizen* push_head(citizen* data);

	node_citizen* delete_head();

	void delete_back();

	void print();
	void clear();
	citizen* search_by_apartament_number(int apartament_number);
	void save_file(std::ofstream* fout);
	node_citizen* delete_by_apartament_number(int apartament_number);
};

node_citizen::~node_citizen() {
	std::cout << "Узел удален" << std::endl;
	delete this->data;
}

node_citizen::node_citizen(citizen* data, node_citizen* pNext) {
	this->data = data;
	this->pNext = pNext;
};

node_citizen::node_citizen(citizen* data) {
	this->data = data;
	this->pNext = NULL;
};

node_citizen::node_citizen() {
	this->data = NULL;
	this->pNext = NULL;
};

node_citizen* node_citizen::input()
{
	int n_citizens;
	std::cout << "Начинаем заполнение однонаправленного списка владельцев квартир многоэтажного дома!" << std::endl;
	std::cout << "Введите количество жителей: ";
	std::cin >> n_citizens;
	node_citizen* temp = this;
	for (int i = 0; i < n_citizens; i++) {
		citizen* tmp = new citizen;
		tmp->input_citizen();
		temp = temp->push_sorted(tmp);
	}
	return temp;
}

node_citizen* node_citizen::push_sorted(citizen* data)
{
	if (this->data == NULL) {
		this->data = data;
	}
	else {
		if (this->data->apartment_number > data->apartment_number) {
			return this->push_head(data);
		}
		else {
			node_citizen* temp = this;
			while (temp->pNext != NULL)
			{
				if (temp->pNext->data->apartment_number > data->apartment_number) {
					break;
				}
				temp = temp->pNext;
			}
			node_citizen* p = new node_citizen(data, temp->pNext);
			temp->pNext = p;
		}
	}
	return this;
}

node_citizen* node_citizen::push_head(citizen* data)
{
	if (this->data == NULL) {
		this->data = data;
		return this;
	}
	else {
		node_citizen* temp = new node_citizen(data, this);
		return temp;
	}
}

node_citizen* node_citizen::delete_head()
{
	node_citizen* temp = this->pNext;
	delete this;
	return temp;
};

void node_citizen::delete_back()
{
	node_citizen* temp = this;
	while (temp->pNext != NULL)
	{
		temp = temp->pNext;
	}
	delete temp;
};

void node_citizen::print()
{
	node_citizen* temp = this;
	do {
		if (temp->data != NULL) {
			temp->data->print();
		}
		temp = temp->pNext;
	} while (temp != NULL);
}

void node_citizen::clear()
{
	if (this->pNext != NULL) {
		this->pNext->clear();
	}
	delete this;
}

citizen* node_citizen::search_by_apartament_number(int apartament_number) {
	node_citizen* temp = this;
	do {
		if (temp->data != NULL) {
			if (temp->data->apartment_number == apartament_number) {
				return temp->data;
			}
		}
		temp = temp->pNext;
	} while (temp != NULL);
	return NULL;
}

void node_citizen::save_file(std::ofstream* fout) {
	node_citizen* temp = this;
	do {
		citizen* tmp = temp->data;
		if (tmp != NULL) {
			*fout << tmp->fio_owner << '\n';
			*fout << tmp->apartment_number << '\n';
			*fout << tmp->square << '\n';
			*fout << tmp->stage << '\n';
			tmp->list_registered_citizens->save_file(fout);
		}
		temp = temp->pNext;
	} while (temp != NULL);
}

node_citizen* node_citizen::delete_by_apartament_number(int apartament_number) {
	if (this->data->apartment_number == apartament_number) {
		node_citizen* tmp = this->pNext;
		this->pNext = NULL;
		delete this;
		return tmp;
	}
	else
	{
		node_citizen* temp = this;
		do {
			if (temp != NULL) {
				if (temp->pNext->data->apartment_number == apartament_number) {
					node_citizen* tmp = temp->pNext;
					temp->pNext = tmp->pNext;
					tmp->pNext = NULL;
					delete tmp;
					break;
				}
			}
			temp = temp->pNext;
		} while (temp != NULL);
		return this;
	}
}