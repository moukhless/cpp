#include "PmergeMe.hpp"

int main(int ac, char** av) {
	std::vector<int> unsortedArr;
	for (int i = 1; i < ac ; i++) {
		char* endptr;
		long num = std::strtol(av[i], &endptr, 10);
		if (*endptr != '\0' || endptr == av[i] || num < 0) {
			std::cout << "Error" << std::endl;
			exit(0);
		}
		unsortedArr.push_back(num);
	}
	std::vector<int> firstPart;
	std::vector<int> secondPart;
	unsigned long mid = unsortedArr.size() / 2;
	for (unsigned long i = 0; i < unsortedArr.size(); i++) {
		if (i < mid)
			firstPart.push_back(unsortedArr[i]);
		else
			secondPart.push_back(unsortedArr[i]);
	}
	std::cout << "befor: ";
	for (unsigned long i = 0; i < unsortedArr.size(); i++) {
		std::cout << unsortedArr[i] << " ";
	}
	std::cout << std::endl;
	binarySearchInsertion(firstPart);
	for (unsigned long i = 0; i < secondPart.size(); i++) {
		firstPart.push_back(secondPart[i]);
	}
	mergeSort(firstPart);
	std::cout << "after: ";
	for (unsigned long i = 0; i < firstPart.size(); i++) {
		std::cout << firstPart[i] << " ";
	}
	std::cout << std::endl;
	return (0);
}