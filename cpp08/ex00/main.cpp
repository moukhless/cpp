#include "easyfind.hpp"

int main() {
	std::vector<int> numbers;
	for (int i = 0; i < 5; i++){
		numbers.push_back(i);
	}
	int valueToFind = 2;

	try {
		std::vector<int>::iterator result = easyfind(numbers, valueToFind);
		std::cout << "First occurence: " << *result << std::endl;

	}catch (const std::exception& e) {
		std::cout << e.what() <<std::endl;
	}
	return (0);
}