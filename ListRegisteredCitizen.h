#pragma once
#include "NodeRegisteredCitizen.h"
struct list_registered_citizen {
	list_registered_citizen();

	~list_registered_citizen();

	node_registered_citizen* head;
	int size;
	int less18;
	int more18;

	void push_head(registered_citizen* data);

	void print();

	void input();

	void save_file(std::ofstream* fout);
	void read_file(std::ifstream* fin);
	registered_citizen* search_registered_citizen_by_all_data(std::string fio, int year, int month, int day, std::string target);
	void remove_registered_citizen(registered_citizen* data);
};

list_registered_citizen::list_registered_citizen() {
	this->head = new node_registered_citizen;
	this->size = 0;
	this->less18 = 0;
	this->more18 = 0;
}

list_registered_citizen::~list_registered_citizen()
{
	this->head->clear();
}

void list_registered_citizen::push_head(registered_citizen* data) {
	this->head = this->head->push_head(data);
	this->size++;
	if (data->age >= 18) {
		this->more18++;
	}
	else {
		this->less18++;
	}
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

registered_citizen* list_registered_citizen::search_registered_citizen_by_all_data(std::string fio, int year, int month, int day, std::string target) {
	return this->head->search_registered_citizen_by_all_data(fio, year, month, day, target);
}

void list_registered_citizen::remove_registered_citizen(registered_citizen* data) {
	this->head = this->head->remove_registered_citizen(data);
	this->size--;
	if (data->age >= 18) {
		this->more18--;
	}
	else {
		this->less18--;
	}
}