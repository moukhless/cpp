#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
	private:
		T *element;
		unsigned int s;
	public:
		Array() {
			s = 0;
			element = new T[s];
		}
		Array(unsigned int n) {
			if (n > 0) {
				element = new T[n];
				s = n;
			}
			else {
				element = NULL;
				s = 0;
			}
		}

		~Array() {
			delete[] element;
		}

		Array(const Array& copy) {
			s = copy.s;
			element = new T[s];
			*this = copy;
		}

		Array& operator=(const Array& obj) {
			if (this != &obj)
			{
				delete[] element;
				s = obj.s;
				element = new T[s];
				for (unsigned int i = 0; i < obj.s; i++) {
					element[i] = obj.element[i];
				}
			}
			return (*this);
		}

		class OutOfRangeException : public std::exception{
			public:
				const char* what() const throw() {
					return("Index out of range");
				}
		};

		T& operator[](unsigned int index) {
			if (index >= s)
				throw OutOfRangeException();
			return (element[index]);
		}
		const T& operator[](unsigned int index) const {
			if (index >= s)
				throw OutOfRangeException();
			return (element[index]);
		}

		int size() const {
			return (s);
		}
};



#endif