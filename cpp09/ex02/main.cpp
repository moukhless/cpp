#include "PmergeMe.hpp"

int main(int ac, char** av) {
	if (ac == 1) {
		std::cout << "Error" << std::endl;
		exit(0);
	}
	use_vector(ac, av);
	use_list(ac, av);
	return (0);
}