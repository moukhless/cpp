#include "PmergeMe.hpp"

void	mergeSort(std::vector<std::pair<int, int> >& arr) {
	if (arr.size() <= 1)
		return ;
	std::vector<std::pair<int, int> > leftArr;
	std::vector<std::pair<int, int> > rightArr;
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

void mergeSort(std::list<std::pair<int, int> >& arr) {
	if (arr.size() <= 1)
		return;
	std::list<std::pair<int, int> > leftArr;
	std::list<std::pair<int, int> > rightArr;
	unsigned long mid = arr.size() / 2;
	unsigned long i = 0;
	for (std::list<std::pair<int, int> >::iterator it = arr.begin(); it != arr.end(); ++it, ++i) {
		if (i < mid)
			leftArr.push_back(*it);
		else
			rightArr.push_back(*it);
	}
	mergeSort(leftArr);
	mergeSort(rightArr);
	merge(leftArr, rightArr, arr);
}

void	merge(std::vector<std::pair<int, int> >& leftArr, std::vector<std::pair<int, int> >& rightArr, std::vector<std::pair<int, int> >& arr) {
	unsigned long l = 0;
	unsigned long r = 0;
	int a = 0;
	while (l < leftArr.size() && r < rightArr.size()) {
		if (leftArr[l].first < rightArr[r].first)
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

void merge(std::list<std::pair<int, int> >& leftArr, std::list<std::pair<int, int> >& rightArr, std::list<std::pair<int, int> >& arr) {
	std::list<std::pair<int, int> >::iterator leftIt = leftArr.begin();
	std::list<std::pair<int, int> >::iterator rightIt = rightArr.begin();
	std::list<std::pair<int, int> >::iterator arrIt = arr.begin();

	while (leftIt != leftArr.end() && rightIt != rightArr.end()) {
		if ((*leftIt).first < (*rightIt).first)
			*arrIt++ = *leftIt++;
		else
			*arrIt++ = *rightIt++;
	}
	while (leftIt != leftArr.end()) {
		*arrIt++ = *leftIt++;
	}
	while (rightIt != rightArr.end()) {
		*arrIt++ = *rightIt++;
	}
}

unsigned long	get_time(int i)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_usec + tv.tv_sec * i * i);
}

void	printArr(std::vector<int> arr) {
	for (unsigned long i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void printArr(std::list<int> arr) {
	for (std::list<int>::const_iterator it = arr.begin(); it != arr.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	fillPairsInArr(std::vector<std::pair<int, int> >& pairArr, std::vector<int>& unsortedArr, int &lastElement) {
	for (unsigned int i = 0; i < unsortedArr.size(); i += 2) {
		if (i + 1 < unsortedArr.size())
			pairArr.push_back(std::make_pair(unsortedArr[i], unsortedArr[i + 1]));
	}
	if (unsortedArr.size() % 2 != 0)
		lastElement = unsortedArr.back();
	else
		lastElement = -1;
}

void	fillPairsInArr(std::list<std::pair<int, int> >& pairArr, std::list<int>& unsortedArr, int &lastElement) {
	std::list<int>::iterator it = unsortedArr.begin();
	while (it != unsortedArr.end()) {
		int first = *it;
		++it;
		if (it != unsortedArr.end()) {
			int second = *it;
			++it;
			pairArr.push_back(std::make_pair(first, second));
		}
	}
	if (unsortedArr.size() % 2 != 0)
		lastElement = unsortedArr.back();
	else
		lastElement = -1;
}

void	comparPairs(std::vector<std::pair<int, int> >& pairArr) {
	for (unsigned int i = 0; i < pairArr.size(); i++) {
		if (pairArr[i].first < pairArr[i].second) {
			int tmp = pairArr[i].first;
			pairArr[i].first = pairArr[i].second;
			pairArr[i].second = tmp;
		}
	}
}

void comparPairs(std::list<std::pair<int, int> >& pairList) {
	for (std::list<std::pair<int, int> >::iterator it = pairList.begin(); it != pairList.end(); ++it) {
		if ((*it).first < (*it).second) {
			int tmp = (*it).first;
			(*it).first = (*it).second;
			(*it).second = tmp;
		}
	}
}

void	fillFirstPairInArr(std::vector<std::pair<int, int> >& pairArr, std::vector<int>& arr) {
	arr.push_back(pairArr[0].second);
	for (unsigned int i = 0; i < pairArr.size(); i++) {
		arr.push_back(pairArr[i].first);
	}
}

void fillFirstPairInArr(std::list<std::pair<int, int> >& pairList, std::list<int>& arr) {
	arr.push_back(pairList.front().second);
	for (std::list<std::pair<int, int> >::iterator it = pairList.begin(); it != pairList.end(); ++it) {
		arr.push_back(it->first);
	}
}

void	insertElements(std::vector<std::pair<int, int> >& pairArr, std::vector<int>& arr) {
	int preElement;
	int currElement = 1;
	int nextElement = 3;
	while (arr.size() != pairArr.size() * 2) {
		for (int i = nextElement - 1; i > currElement - 1; i--) {
			if (i + 1 <= (int)pairArr.size()) {
				std::vector<int>::iterator low = std::lower_bound(arr.begin(), arr.end(), pairArr[i].second);
				arr.insert(low, pairArr[i].second);
			}
		}
		preElement = currElement;
		currElement = nextElement;
		nextElement = currElement + (preElement * 2);
	}
}

void insertElements(std::list<std::pair<int, int> >& pairList, std::list<int>& arr) {
	int preElement;
	int currElement = 1;
	int nextElement = 3;

	while (arr.size() != pairList.size() * 2) {
		for (int i = nextElement - 1; i > currElement - 1; i--) {
			std::list<std::pair<int, int> >::iterator it = pairList.begin();
			std::advance(it, i); // Move the iterator to the ith position
			if (i + 1 <= (int)pairList.size()) {
				std::list<int>::iterator low = std::lower_bound(arr.begin(), arr.end(), (*it).second);
				arr.insert(low, (*it).second);
			}
		}
		preElement = currElement;
		currElement = nextElement;
		nextElement = currElement + (preElement * 2);
	}
}

void	use_vector(int ac, char** av) {
	std::vector<int> unsortedArr;
	data_management(ac, av, unsortedArr);
	std::cout << "Before: ";
	printArr(unsortedArr);
	std::vector<std::pair<int, int> > pairArr;
	int lastElemetent;
	std::vector<int> arr;
	unsigned long bTime = get_time(1000);
	if (unsortedArr.size() != 1) {
		fillPairsInArr(pairArr, unsortedArr, lastElemetent);
		comparPairs(pairArr);
		mergeSort(pairArr);
		fillFirstPairInArr(pairArr, arr);
		insertElements(pairArr, arr);
		if (lastElemetent != -1) {
			std::vector<int>::iterator low = std::lower_bound(arr.begin(), arr.end(), lastElemetent);
			arr.insert(low, lastElemetent);
		}
	}
	unsigned long etime = get_time(1000);
	std::cout << "After: ";
	if (unsortedArr.size() == 1) 
		printArr(unsortedArr);
	else
		printArr(arr);
	std::cout << "Time to process a range of " << unsortedArr.size() << " elements with std::vector : ";
	std::cout << etime - bTime << " us" << std::endl;
}

void	use_list(int ac, char** av) {
	std::list<int> unsortedList;
	data_management(ac, av, unsortedList);
	std::list<std::pair<int, int> > pairArr;
	int lastElemetent;
	std::list<int> arr;
	unsigned long bTime = get_time(1000);
	if (unsortedList.size() != 1) {
		fillPairsInArr(pairArr, unsortedList, lastElemetent);
		comparPairs(pairArr);
		mergeSort(pairArr);
		fillFirstPairInArr(pairArr, arr);
		insertElements(pairArr, arr);
		if (lastElemetent != -1) {
			std::list<int>::iterator low = std::lower_bound(arr.begin(), arr.end(), lastElemetent);
			arr.insert(low, lastElemetent);
		}
	}
	unsigned long eTime = get_time(1000);
	std::cout << "Time to process a range of " << unsortedList.size() << " elements with std::list : ";
	std::cout << eTime - bTime << " us" << std::endl;
}