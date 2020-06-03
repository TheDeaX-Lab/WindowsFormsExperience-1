#pragma once
#include <string>
#include <iostream>
struct birth {
	unsigned short day;
	unsigned short month;
	unsigned short year;

	void input();

	std::string to_string();
};

void birth::input() {
	for (;;) {
		std::cout << "¬ведите день рождени€: ";
		std::cin >> this->day;
		if (this->day > 31 || this->day < 1) {
			std::cout << "ƒень рождени€ должны входить в диапозон 1-31!" << std::endl;
		}
		else {
			break;
		}
	}
	for (;;) {
		std::cout << "¬ведите мес€ц рождени€: ";
		std::cin >> this->month;
		if (this->month > 12 || this->month < 1) {
			std::cout << "ћес€ц рождени€ должны входить в диапозон 1-12!" << std::endl;
		}
		else {
			break;
		}
	}
	std::cout << "¬ведите год рождени€: ";
	std::cin >> this->year;
}

std::string birth::to_string() {
	return std::to_string(this->day) + "." + std::to_string(this->month) + "." + std::to_string(this->year);
}