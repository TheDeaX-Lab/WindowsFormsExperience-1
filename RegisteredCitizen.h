#pragma once
#include <string>
#include <ctime>
#include "Birth.h"
struct registered_citizen {
	std::string fio;
	birth birth;
	std::string target;

	void print();

	void input();
};

void registered_citizen::print() {
	std::cout << "\t��� �������������������: " << this->fio << std::endl;
	std::cout << "\t���� ��������: " << this->birth.to_string() << std::endl;
	if (this->target != "") {
		std::cout << "\t��� �������: " << this->target << std::endl;
	}
}

void registered_citizen::input() {
	std::cin.ignore();
	std::cout << "������� ��� ������������������ �� ������� ������: ";
	std::getline(std::cin, this->fio, '\n');
	this->birth.input();
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	int year = now->tm_year + 1900 - this->birth.year - 1;
	if (this->birth.month == (now->tm_mon + 1) && this->birth.day >= now->tm_mday || this->birth.month > (now->tm_mon + 1)) {
		year += 1;
	}
	if (year > 18) {
		std::cout << "������� ��� ������� (�����, ������, ������): ";
		std::cin >> this->target;
	}
}