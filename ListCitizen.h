#pragma once
#include "NodeCitizen.h"
struct list_citizen {
	list_citizen();

	~list_citizen();

	node_citizen* head;
	int size;
	int less18;
	int more18;

	void input();

	void print();
	void push_sorted(citizen* data);
	void push_registered_citizen(int apartament_number, registered_citizen* data);
	void remove_registered_citizen_from_apartament(int apartament, registered_citizen* data);
	citizen* search_by_apartament_number(int apartament_number);

	registered_citizen* search_registered_citizen_by_all_data(int apartament_number, std::string fio, int year, int month, int day, std::string target);

	void save_file(std::ofstream* fout);
	void read_file(std::ifstream* fin);
	void delete_by_apartament_number(int apartament_number);
	void replace_apartament_number_in_registered_citizen(int from_apartament_number, int to_apartament_number, registered_citizen* tmp);
};

list_citizen::list_citizen() {
	this->head = new node_citizen;
	this->size = 0;
	this->less18 = 0;
	this->more18 = 0;
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

void list_citizen::push_registered_citizen(int apartament_number, registered_citizen* data) {
	citizen* owner = this->search_by_apartament_number(apartament_number);
	owner->list_registered_citizens->push_head(data);
	if (data->age >= 18) {
		this->more18++;
	}
	else {
		this->less18++;
	}
}

void list_citizen::remove_registered_citizen_from_apartament(int apartament_number, registered_citizen* data) {
	citizen* owner = this->search_by_apartament_number(apartament_number);
	owner->list_registered_citizens->remove_registered_citizen(data);
	if (data->age >= 18) {
		this->more18--;
	}
	else {
		this->less18--;
	}
}

citizen* list_citizen::search_by_apartament_number(int apartament_number) {
	return this->head->search_by_apartament_number(apartament_number);
}

registered_citizen* list_citizen::search_registered_citizen_by_all_data(int apartament_number, std::string fio, int year, int month, int day, std::string target) {
	citizen* owner = this->search_by_apartament_number(apartament_number);
	return owner->list_registered_citizens->search_registered_citizen_by_all_data(fio, year, month, day, target);
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
		this->less18 += tmp->list_registered_citizens->less18;
		this->more18 += tmp->list_registered_citizens->more18;
		this->push_sorted(tmp);
	}
}

void list_citizen::delete_by_apartament_number(int apartament_number) {
	citizen* owner = this->search_by_apartament_number(apartament_number);
	this->less18 -= owner->list_registered_citizens->less18;
	this->more18 -= owner->list_registered_citizens->more18;
	this->head = this->head->delete_by_apartament_number(apartament_number);
	this->size--;
}