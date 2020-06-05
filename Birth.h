#pragma once
#include <string>
#include <iostream>
struct birth {
	unsigned short day;
	unsigned short month;
	unsigned short year;

	void input();

	int get_age();

	std::string to_string();
};

void birth::input() {
	for (;;) {
		std::cout << "������� ���� ��������: ";
		std::cin >> this->day;
		if (this->day > 31 || this->day < 1) {
			std::cout << "���� �������� ������ ������� � �������� 1-31!" << std::endl;
		}
		else {
			break;
		}
	}
	for (;;) {
		std::cout << "������� ����� ��������: ";
		std::cin >> this->month;
		if (this->month > 12 || this->month < 1) {
			std::cout << "����� �������� ������ ������� � �������� 1-12!" << std::endl;
		}
		else {
			break;
		}
	}
	std::cout << "������� ��� ��������: ";
	std::cin >> this->year;
}

std::string birth::to_string() {
	return std::to_string(this->day) + "." + std::to_string(this->month) + "." + std::to_string(this->year);
}

int birth::get_age() {
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	int year = now->tm_year + 1900 - this->year - 1;
	if (month == (now->tm_mon + 1) && day >= now->tm_mday || month > (now->tm_mon + 1)) {
		year += 1;
	}
	return year;
}