#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
	if (this != &obj){
	}
	return (*this);
}

void ScalarConverter::convert(std::string str) {
	try {
		long num = std::stod(str);
		if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min()) {
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
		}
		else {
			if (num > 127 || num < -128)
				std::cout << "char: " << "impossible" << std::endl;
			else if (num >= 32 && num <= 126)
				std::cout << "char: '" << static_cast<char>(num) << "'" <<std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
			std::cout << "int: " << num << std::endl;
		}
	}
	catch (const std::exception& e) {
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
	}
	try {
		float numf = std::stof(str);
		std::cout << "float: " << std::fixed << std::setprecision(1) << numf << "f" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "float: " << "impossible" << std::endl;
	}
	try {
		double numd = std::stod(str);
		std::cout << "double: " << numd << std::endl;
	}
	catch(const std::exception& e){
		std::cout << "double: " << "impossible" << std::endl;
	}
}