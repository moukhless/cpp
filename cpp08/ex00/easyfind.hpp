#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>

class NoOccurence : public std::exception
{
	const char *what() const throw() {
		return ("There are no occurence !!");
	}
};

template <typename T> typename T::iterator easyfind(T firstP, int secondP) {
	typename T::iterator it = std::find(firstP.begin(), firstP.end(), secondP);
	if (it == firstP.end())
		throw NoOccurence();
	return (it);
}

#endif