#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class Data
{
	private:
		std::string date;
		float value;
	public:
		Data();
		Data(std::string date, float value);
		~Data();
		Data(const Data& copy);
		Data& operator=(const Data& obj);
		std::string getDate();
		float getValue();
		void setDate(std::string date);
		void setValue(float value);
} ;

void	openInputFile(std::ifstream& inputFile, std::string fileName);
void	amountOfBtc(std::ifstream& inputFile, std::deque<Data> dequeData);
void	checkHeaderInputFile(std::ifstream& inputFile);
std::deque<std::string> splitString(std::string& input, char delimiter);
float stringToFloat(std::string& str);
long stringToLong(const std::string& str);
bool checkNumSpace(std::deque<std::string> result);
bool validDate(std::string& date);
bool validValue(std::string value);

#endif