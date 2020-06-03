#pragma once
#include "NodeRegisteredCitizen.h"
struct list_registered_citizen {
	list_registered_citizen();

	~list_registered_citizen();

	node_registered_citizen* head;
	int size;

	void push_head(registered_citizen* data);

	void print();

	void input();
};

list_registered_citizen::list_registered_citizen() {
	this->head = new node_registered_citizen;
	this->size = 0;
}

list_registered_citizen::~list_registered_citizen()
{
	this->head->clear();
}

void list_registered_citizen::push_head(registered_citizen* data) {
	this->head = this->head->push_head(data);
	this->size++;
}

void list_registered_citizen::print() {
	this->head->print();
}

void list_registered_citizen::input() {
	this->head = this->head->input();
}