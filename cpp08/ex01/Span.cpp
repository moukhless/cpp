#include "Span.hpp"

Span::Span() : N(5) {
}
Span::Span(unsigned int N) {
	this->N = N;
}
Span::~Span() {
}
Span::Span(const Span& copy) {
	*this = copy;
}
Span& Span::operator=(const Span& obj) {
	if (this != &obj) {
		this->N = obj.N;
		this->arr = obj.arr;
	}
	return (*this);
}

const char *Span::spanIsFull::what() const throw() {
	return ("The span is full !!");
}
const char *Span::noEnoughElement::what() const throw() {
	return ("There arn't enough element !!");
}
const char *Span::rangeIsbigger::what() const throw() {
	return ("The range is bigger than max size !!");
}

void Span::addNumber(int num) {
	if (arr.size() == N)
		throw spanIsFull();
	arr.push_back(num);
}
int Span::shortestSpan() {
	if (arr.size() == 1 || arr.empty())
		throw (noEnoughElement());
	int min = std::numeric_limits<int>::max();
	int span;
	std::sort(arr.begin(), arr.end());
	for (unsigned int i = 1; i < N; i++) {
		span = std::abs(arr[i] - arr[i - 1]);
		min = std::min(span, min);
	}
	return (min);
}
int Span::longestSpan() {
	if (arr.size() == 1 || arr.empty())
		throw (noEnoughElement());
	std::sort(arr.begin(), arr.end());
	int max = arr.back() - arr.front();
	return (max);
}
void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (std::distance(begin, end) + arr.size() > N)
		throw (rangeIsbigger());
	arr.insert(arr.end(), begin, end);
}