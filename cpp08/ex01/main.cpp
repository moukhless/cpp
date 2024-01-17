#include "Span.hpp"

int main()
{
	try {
		Span sp = Span(20);
		std::vector<int> vec;
		for (int i = 0; i < 15; i++) {
			vec.push_back(i + 1);
		}
		sp.addRange(vec.begin(), vec.end());
		sp.addNumber(17);
		sp.addNumber(52);
		sp.addNumber(96);
		sp.addNumber(78);
		sp.addNumber(55);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}