#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <utility>
# include <sys/time.h>

void	use_vector(int ac, char** av);
void	use_list(int ac, char** av);
template <typename T> void	data_management(int ac, char** av, T& unsortedArr) {
	for (int i = 1; i < ac ; i++) {
		char* endptr;
		long num = std::strtol(av[i], &endptr, 10);
		if (*endptr != '\0' || endptr == av[i] || num < 0) {
			std::cout << "Error" << std::endl;
			exit(0);
		}
		unsortedArr.push_back(num);
	}
}
void	mergeSort(std::vector<std::pair<int, int> >& arr);
void	merge(std::vector<std::pair<int, int> >& leftArr, std::vector<std::pair<int, int> >& rightArr, std::vector<std::pair<int, int> >& arr);
void	merge(std::list<std::pair<int, int> >& leftArr, std::list<std::pair<int, int> >& rightArr, std::list<std::pair<int, int> >& arr);
unsigned long	get_time(int i);
void	printArr(std::vector<int> arr);
void	printArr(std::list<int> arr);
void	fillPairsInArr(std::vector<std::pair<int, int> >& pairArr, std::vector<int>& unsortedArr, int &lastElement);
void	fillPairsInArr(std::list<std::pair<int, int> >& pairArr, std::list<int>& unsortedArr, int &lastElement);
void	comparPairs(std::vector<std::pair<int, int> >& pairArr);
void	comparPairs(std::list<std::pair<int, int> >& pairList);
void	insertElements(std::vector<std::pair<int, int> >& pairArr, std::vector<int>& arr);

#endif