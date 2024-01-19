#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

// class Btc {
// 	private:
// 		std::string date;
// 		bool pipe;
// 		double value;
// 	public:
// 		Btc();
// 		Btc(std::string date, bool pipe, double value);
// 		~Btc();
// 		Btc(const Btc& copy);
// 		Btc& operator=(const Btc& obj);

// 		std::string getDate();
// 		bool getPipe();
// 		double getValue();
// };

// std::ostream& operator<<(std::ostream& os, const Btc& obj);
class Data
{
	private:
		std::string date;
		double value;
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
double stringToDouble(std::string& str);
long stringToLong(const std::string& str);
bool checkNumSpace(std::deque<std::string> result);
bool validDate(std::string& date);
bool validValue(std::string value);

#endif