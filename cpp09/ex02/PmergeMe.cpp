#include "PmergeMe.hpp"

void	binarySearchInsertion(std::vector<int>& firstPart) {

	for (unsigned long i = 0; i < firstPart.size(); i++) {
		std::vector<int>::iterator low;
		int tmp = firstPart[i];
		firstPart.erase(firstPart.begin() + i);
		low = std::lower_bound(firstPart.begin(), firstPart.end(), tmp);
		firstPart.insert(low, tmp);
	}
}

void	mergeSort(std::vector<int>& arr) {
	if (arr.size() <= 1)
		return ;
	std::vector<int> leftArr;
	std::vector<int> rightArr;
	unsigned long mid = arr.size() / 2;
	for (unsigned long i = 0; i < arr.size(); i++) {
		if (i < mid)
			leftArr.push_back(arr[i]);
		else
			rightArr.push_back(arr[i]);
	}
	mergeSort(leftArr);
	mergeSort(rightArr);
	merge(leftArr, rightArr, arr);
}

void	merge(std::vector<int>& leftArr, std::vector<int>& rightArr, std::vector<int>& arr) {
	unsigned long l = 0;
	unsigned long r = 0;
	int a = 0;
	while (l < leftArr.size() && r < rightArr.size()) {
		if (leftArr[l] < rightArr[r])
			arr[a++] = leftArr[l++];
		else
			arr[a++] = rightArr[r++];
	}
	while (l < leftArr.size()){
		arr[a++] = leftArr[l++];
	}
	while (r < rightArr.size()){
		arr[a++] = rightArr[r++];
	}
}