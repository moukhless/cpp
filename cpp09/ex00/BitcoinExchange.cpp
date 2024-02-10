#include "BitcoinExchange.hpp"

Data::Data() {
}
Data::Data(std::string date, float value) {
	this->date = date;
	this->value = value;
}
Data::~Data() {
}
Data::Data(const Data& copy) {
	*this = copy;
}
Data& Data::operator=(const Data& obj) {
	if (this != &obj) {
		this->date = obj.date;
		this->value = obj.value;
	}
	return (*this);
}
std::string Data::getDate() {
	return (date);
}
float Data::getValue() {
	return (value);
}
void Data::setDate(std::string date) {
	this->date = date;
}
void Data::setValue(float value) {
	this->value = value;
}

void	openInputFile(std::ifstream& inputFile, std::string fileName)
{
	inputFile.open(fileName);
	if (!inputFile.is_open())
	{
		std::cout << "Unable to open " << fileName << " !!" << std::endl;
		exit (1);
	}
}

void	checkHeaderInputFile(std::ifstream& inputFile) {
	std::string str;

	std::getline(inputFile, str);
	if (str != "date | value") {
		std::cerr << "Error: wrong file" << std::endl;
		exit(1);
	}
}

std::deque<std::string> splitString(std::string& input, char delimiter) {
	std::deque<std::string> tokens;
	std::istringstream tokenStream(input);
	std::string token;

	while (std::getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}

float stringToFloat(std::string& str) {
	char* endptr;
	float result = std::strtod(str.c_str(), &endptr);

	if (*endptr != '\0' || endptr == str.c_str()) {
		throw std::runtime_error("");
	}
	return result;
}

long stringToLong(const std::string& str) {
	char* endptr;
	long result = std::strtol(str.c_str(), &endptr, 10);

	if (*endptr != '\0' || endptr == str.c_str()) {
		throw std::runtime_error("");
	}
	return (result);
}

bool checkNumSpace(std::deque<std::string> result) {
	for (unsigned long i = 0; i < result.size(); i++) {
		int count = 0;
		int j = 0;
		while (result[i][j]) {
			if (result[i][j] == ' ')
				count++;
			j++;
		}
		if (count != 1)
			return (false);
	}
	return (true);
}

bool validDate(std::string& date) {
	std::string	year;
	std::string	month;
	std::string	day;
	long yearL;
	long monthL;
	long dayL;

	if (date.find('-', 0) != std::string::npos)
		year = date.substr(0, date.find('-', 0));
	if (!year.empty() && date.find('-', year.length() + 1) != std::string::npos)
		month = date.substr(year.length() + 1, date.find('-', year.length() + 1) - year.length() - 1);
	if (!month.empty()) {
		day = date.substr(year.length() + month.length() + 2);
		day.erase(day.length() - 1, 1);
	}
	if (year.empty() || month.empty() || day.empty())
		return (false);
	try {
		yearL = stringToLong(year);
		monthL = stringToLong(month);
		dayL = stringToLong(day);
	}catch(const std::exception& e) {
		return (false);
	}
	if (monthL <= 12 && monthL >= 1) {
		if (monthL == 4 || monthL == 6 || monthL == 9 || monthL == 11) {
			if (dayL > 30 || dayL < 1)
				return (false);
		}
		else
			if (dayL > 31 || dayL < 1)
				return (false);
	}
	else
		return (false);
	if ((yearL % 4 == 0 && yearL % 100 != 0) || (yearL % 400 == 0)) {
		if (monthL == 2 && (dayL > 29 || dayL < 1))
			return (false);
	}
	else
		if (monthL == 2 && (dayL > 28 || dayL < 1))
			return (false);
	date = year + "-";
	if (monthL < 10)
		date += "0" + std::to_string(monthL) + "-";
	else
		date += std::to_string(monthL) + "-";
	if (dayL < 10)
		date += "0" + std::to_string(dayL);
	else
		date += std::to_string(dayL);
	return (true);
}

bool validValue(std::string value) {
	value.erase(0, 1);
	float valueF;
	try {
		valueF = stringToFloat(value);
	}catch (const std::exception& e) {
		std::cout << "Error: invalid value" << std::endl;
		return (false);
	}
	if (valueF < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (valueF > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	if (value.find('-') != std::string::npos) {
		std::cout << "Error: invalid value" << std::endl;
		return (false);
	}
	return (true);
}

void	amountOfBtc(std::ifstream& inputFile, std::deque<Data> dequeData) {
	std::string	str;
	checkHeaderInputFile(inputFile);
	while (std::getline(inputFile, str)) {
		if (str.back() == '|') {
			std::cout << "Error: bad input => " << str << std::endl;
			continue;
		}
		std::deque<std::string> result = splitString(str, '|');
		if (result.empty()) {
			std::cout << "Error: empty line." << std::endl;
			continue;
		}
		if (result.size() != 2 || !checkNumSpace(result)) {
			std::cout << "Error: bad input => " << str << std::endl;
			continue;
		}
		if (!validDate(result[0])) {
			std::cout << "Error: invalid date" << std::endl;
			continue;
		}
		if (!validValue(result[1])) {
			continue;
		}
		int check = 0;
		for (unsigned long i = 0; i < dequeData.size(); i++) {
			if (dequeData[i].getDate() >= result[0]) {
				check = 1;
				if (dequeData[i].getDate() == result[0]) {
					std::cout << result[0] << " => " << result[1].erase(0, 1) << " = ";
					std::cout << dequeData[i].getValue() * stringToFloat(result[1]) << std::endl;
				}
				else {
					if (i != 0) {
						std::cout << result[0] << " => " << result[1].erase(0, 1) << " = ";
						std::cout << dequeData[i].getValue() * stringToFloat(result[1]) << std::endl;
					}
					else
						std::cout << "Error: invalid date" << std::endl;
				}
				break;
			}
		}
		if (!check) {
			std::cout << result[0] << " => " << result[1].erase(0, 1) << " = ";
			std::cout << dequeData[dequeData.size() - 1].getValue() * stringToFloat(result[1]) << std::endl;
		}
	}
}