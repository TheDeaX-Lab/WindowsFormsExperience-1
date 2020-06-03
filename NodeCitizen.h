#pragma once
#include "Citizen.h"
struct node_citizen {
	~node_citizen();

	node_citizen(citizen* data, node_citizen* pNext);

	node_citizen(citizen* data);

	node_citizen() {
		this->data = NULL;
		this->pNext = NULL;
	};
	citizen* data;
	node_citizen* pNext;

	node_citizen* input();

	node_citizen* push_sorted(citizen* data);

	node_citizen* push_head(citizen* data);

	node_citizen* delete_head();

	void delete_back();

	void print();
	void clear();
};

node_citizen::~node_citizen() {
	std::cout << "���� ������" << std::endl;
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
	std::cout << "�������� ���������� ����������������� ������ ���������� ������� ������������� ����!" << std::endl;
	std::cout << "������� ���������� �������: ";
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