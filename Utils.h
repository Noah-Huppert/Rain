#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <sstream>
#include <fstream>

void coutFile(const char* filePath) {
	std::string line;
	std::ifstream file;
	file.open(filePath);

	if (file.is_open()) {
		while (std::getline(file, line)) {
			std::cout << line << "\n";
		}
	}
}

#endif