#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array {
	private:
		T element;
	public:
		Array() {
			new Array[];
		}
		Array(unsigned int n) {
			new Array[n];
		}

		~Array() {

		}

		Array(const Array& copy) {
			
		}

		Array& operator=(const Array& obj) {
			if (this != &obj)
			{
				
			}
			return (*this);
		}
};



#endif