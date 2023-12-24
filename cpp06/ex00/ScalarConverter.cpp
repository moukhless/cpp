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
	char		c;
	long int	num;
	float		numf;
	double		numd;
	char		*endptr;
	std::string	getType;

	if (str.length() == 1) {
		c = str[0];
		getType = "char";
	}
	else if (str.find(".") != std::string::npos || str == "nanf" || str == "-inff" || str == "+inff" || str == "inff" || str == "nan" ||str == "-inf" || str == "+inf" || str == "inf")
	{
		if (str == "nan" || str == "-inf" || str == "+inf" || str == "inf" || str[str.length() - 1] != 'f') {
			numd = std::strtod(str.c_str(), &endptr);
			getType = "double";
		}
		else {
			numf = std::strtof(str.c_str(), &endptr);
			getType = "float";
		}
	}
	else {
		num = std::strtol(str.c_str(), &endptr, 10);
		getType = "int";
	}
	if (getType != "int") {
		num = std::strtod(str.c_str(), &endptr);
		if (getType == "char")
			num = c;
	}
	if (getType != "float") {
		numf = std::strtof(str.c_str(), &endptr);
		if (getType == "char")
			numf = c;
	}
	if (getType != "double") {
		numd = std::strtod(str.c_str(), &endptr);
		if (getType == "char")
			numd = c;
	}
	if (getType != "char")
		c = static_cast<char>(num);

	std::cout << "char: ";
	if (num >= std::numeric_limits<char>::min() && num <= std::numeric_limits<char>::max()) {
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (num >= std::numeric_limits<int>::min() && num <= std::numeric_limits<int>::max()) {
		std::cout <<static_cast<int>(num) << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	if (numf != numf || numf == std::numeric_limits<float>::infinity() || numf == -std::numeric_limits<float>::infinity() || (numf >= -std::numeric_limits<float>::max() && numf <= std::numeric_limits<float>::max())) {
		std::cout << std::fixed << std::setprecision(1) << numf << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "double: ";
	if (numd != numd || numd == std::numeric_limits<double>::infinity() || numd == -std::numeric_limits<double>::infinity() || (numd >= -std::numeric_limits<double>::max() && numd <= std::numeric_limits<double>::max())) {
		std::cout << std::fixed << std::setprecision(1) << numd << std::endl;
	}
	else if (numd < std::numeric_limits<double>::min() && numd > std::numeric_limits<double>::max())
		std::cout << "possible2" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}
