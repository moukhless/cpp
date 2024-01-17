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
	for (unsigned int i = 0; i < N; i++) {
		for (unsigned int j = i + 1; j < N; j++) {
			span = std::abs(arr[i] - arr[j]);
			min = std::min(span, min);
		}
	}
	return (min);
}
int Span::longestSpan() {
	if (arr.size() == 1 || arr.empty())
		throw (noEnoughElement());
	int max = std::numeric_limits<int>::min();
	int span;
	for (unsigned int i = 0; i < N; i++) {
		for (unsigned int j = i + 1; j < N; j++) {
			span = std::abs(arr[i] - arr[j]);
			max = std::max(span, max);
		}
	}
	return (max);
}
void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (std::distance(begin, end) + arr.size() > N)
		throw (rangeIsbigger());
	arr.insert(arr.end(), begin, end);
}