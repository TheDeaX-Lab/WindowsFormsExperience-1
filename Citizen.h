#pragma once
#include "ListRegisteredCitizen.h"
struct citizen {
	unsigned int apartment_number;
	std::string fio_owner;
	unsigned int stage;
	double square;
	list_registered_citizen* list_registered_citizens;

	citizen();

	~citizen();

	void print();

	void input_citizen();

	void read_file(std::ifstream* fin);
};

citizen::citizen() {
	this->list_registered_citizens = new list_registered_citizen;
}

citizen::~citizen()
{
	delete this->list_registered_citizens;
}

void citizen::print()
{
	std::cout << "����� ��������: " << this->apartment_number << std::endl;
	std::cout << "��� ��������� ��� ����������������: " << this->fio_owner << std::endl;
	std::cout << "���� ����: " << this->stage << std::endl;
	std::cout << "������� ��������: " << this->square << " ���������� ������." << std::endl;
	this->list_registered_citizens->print();
	std::cout << std::endl;
}

void citizen::input_citizen() {
	for (;;) {
		std::cout << "������� ����� ��������: ";
		std::cin >> this->apartment_number;
		if (this->apartment_number <= 0) {
			std::cout << "����� �������� ������ ���� �������������!" << std::endl;
		}
		else {
			break;
		}
	}
	std::cin.ignore();
	std::cout << "������� ��� ���������: ";
	std::getline(std::cin, this->fio_owner, '\n');
	for (;;) {
		std::cout << "������� ���� ����: ";
		std::cin >> this->stage;
		if (this->stage <= 0) {
			std::cout << "���� ���� ������ ���� �������������!" << std::endl;
		}
		else {
			break;
		}
	}
	for (;;) {
		std::cout << "������� ������� ��������: ";
		std::cin >> this->square;
		if (this->square <= 0) {
			std::cout << "������� �������� ������ ���� �������������!" << std::endl;
		}
		else {
			break;
		}
	}
	this->list_registered_citizens->input();
}

void citizen::read_file(std::ifstream* fin) {
	fin->ignore();
	std::getline(*fin, this->fio_owner, '\n');
	*fin >> this->apartment_number;
	*fin >> this->square;
	*fin >> this->stage;
	this->list_registered_citizens->read_file(fin);
}