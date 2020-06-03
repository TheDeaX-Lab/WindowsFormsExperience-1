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
