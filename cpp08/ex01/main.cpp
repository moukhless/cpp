#include "Span.hpp"

int main()
{
	try {
		Span sp = Span(10000);
		sp.addManyNumber();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}