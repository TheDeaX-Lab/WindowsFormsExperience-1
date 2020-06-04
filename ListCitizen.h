#pragma once
#include "NodeCitizen.h"
struct list_citizen {
	list_citizen();

	~list_citizen();

	node_citizen* head;
	int size;

	void input();

	void print();
	void push_sorted(citizen* data);
	citizen* search_by_apartament_number(int apartament_number);

	void save_file(std::ofstream* fout);
	void read_file(std::ifstream* fin);
	void delete_by_apartament_number(int apartament_number);
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

void list_citizen::push_sorted(citizen* data) {
	this->head = this->head->push_sorted(data);
	this->size++;
}

citizen* list_citizen::search_by_apartament_number(int apartament_number) {
	return this->head->search_by_apartament_number(apartament_number);
}

void list_citizen::save_file(std::ofstream* fout) {
	*fout << this->size << '\n';
	this->head->save_file(fout);
}

void list_citizen::read_file(std::ifstream* fin) {
	int size;
	*fin >> size;
	for (int i = 0; i < size; i++) {
		citizen* tmp = new citizen;
		tmp->read_file(fin);
		this->push_sorted(tmp);
	}
}

void list_citizen::delete_by_apartament_number(int apartament_number) {
	this->head = this->head->delete_by_apartament_number(apartament_number);
	this->size--;
}