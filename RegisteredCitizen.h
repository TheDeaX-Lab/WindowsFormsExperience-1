#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <ctime>
#include <fstream>
#include "Birth.h"
struct registered_citizen {
	std::string fio;
	birth birth;
	std::string target;

	void print();

	void input();
	void read_file(std::ifstream* fin);
};

void registered_citizen::print() {
	std::cout << "\tФИО зарегистрированного: " << this->fio << std::endl;
	std::cout << "\tДата рождения: " << this->birth.to_string() << std::endl;
	if (this->target != "") {
		std::cout << "\tРод занятий: " << this->target << std::endl;
	}
}

void registered_citizen::input() {
	std::cin.ignore();
	std::cout << "Введите ФИО зарегистрированого по данному адресу: ";
	std::getline(std::cin, this->fio, '\n');
	this->birth.input();
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	int year = now->tm_year + 1900 - this->birth.year - 1;
	if (this->birth.month == (now->tm_mon + 1) && this->birth.day >= now->tm_mday || this->birth.month > (now->tm_mon + 1)) {
		year += 1;
	}
	if (year > 18) {
		std::cout << "Введите род занятий (учеба, работа, пенсия): ";
		std::cin >> this->target;
	}
}

void registered_citizen::read_file(std::ifstream* fin) {
	fin->ignore();
	std::getline(*fin, this->fio, '\n');
	*fin >> this->birth.day;
	*fin >> this->birth.month;
	*fin >> this->birth.year;
	*fin >> this->target;
}