#pragma once
#include "NodeCitizen.h"
struct list_citizen {
	list_citizen();

	~list_citizen();

	node_citizen* head;
	int size;

	void input();

	void print();
};

list_citizen::list_citizen() {
	this->head = new node_citizen;
	this->size = 0;
}

list_citizen::~list_citizen()
{
	this->head->clear();
}

void list_citizen::input() {
	this->head = this->head->input();
}

void list_citizen::print() {
	this->head->print();
}