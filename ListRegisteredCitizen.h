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

	void save_file(std::ofstream* fout);
	void read_file(std::ifstream* fin);
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

void list_registered_citizen::save_file(std::ofstream* fout) {
	*fout << this->size << '\n';
	this->head->save_file(fout);
}

void list_registered_citizen::read_file(std::ifstream* fin) {
	int size;
	*fin >> size;
	for (int i = 0; i < size; i++) {
		registered_citizen* tmp = new registered_citizen;
		tmp->read_file(fin);
		this->push_head(tmp);
	}
}