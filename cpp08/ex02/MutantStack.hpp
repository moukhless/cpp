#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>{
	public:
		MutantStack() {
		}
		~MutantStack() {
		}
		MutantStack(const MutantStack& copy) {
			this->c = copy.c;
		}
		MutantStack& operator=(const MutantStack& obj) {
			if (this != obj) {
				this->c = obj.c;
			}
			return (*this);
		}
		typedef typename Container::iterator iterator;
		iterator begin() {
			return (this->c.begin());
		}
		iterator end() {
			return (this->c.end());
		}
};

#endif