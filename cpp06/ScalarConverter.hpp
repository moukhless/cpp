#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include 

class ScalarConverter {
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& obj);

		static void convert(std::string str);
};

#endif