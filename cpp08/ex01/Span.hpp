#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span {
	private:
		unsigned int N;
		std::vector<int> arr;
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& obj);

		class spanIsFull : public std::exception {
			const char * what() const throw();
		};
		class noEnoughElement : public std::exception {
			const char * what() const throw();
		};

		void addNumber(int N);
		int shortestSpan();
		int longestSpan();
		void addManyNumber();
};

#endif