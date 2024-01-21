#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>

void	binarySearchInsertion(std::vector<int>& firstPart);
void	mergeSort(std::vector<int>& arr);
void	merge(std::vector<int>& leftArr, std::vector<int>& rightArr, std::vector<int>& arr);

#endif