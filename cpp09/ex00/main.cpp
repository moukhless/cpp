#include "BitcoinExchange.hpp"

int main(int ac, char** av) {
	if (ac == 2) {
		std::ifstream	inputFile;
		std::ifstream data;
		std::string str;
		openInputFile(inputFile, av[1]);
		openInputFile(data, "data.csv");
		std::deque<Data> dequeData;
		std::getline(data, str);
		while (std::getline(data, str)) {
			std::deque<std::string> result = splitString(str, ',');
			dequeData.push_back(Data(result[0], stringToFloat(result[1])));
		}
		amountOfBtc(inputFile, dequeData);
	}
	else
		std::cerr << "Error: could not open file." << std::endl;
	return (0);
}