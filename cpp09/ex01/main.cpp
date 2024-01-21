#include "RPN.hpp"

int main(int ac, char**av) {
	if (ac == 2) {
		std::string str(av[1]);
		std::queue<std::string> queueInput = splitString(str, ' ');
		ft_RPN(queueInput);
	}
	else
		std::cout << "Error" << std::endl;
	return (0);
}