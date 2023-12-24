#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base() {
}

Base * generate(void) {
	std::srand(time(NULL));
	int rnum = std::rand();
	if (rnum % 3 == 0) {
		A *objectA = new A();
		return (dynamic_cast<Base*>(objectA));
	}
	if (rnum % 3 == 1) {
		B *objectB = new B();
		return (dynamic_cast<Base*>(objectB));
	}
	if (rnum % 3 == 2) {
		C *objectC = new C();
		return (dynamic_cast<Base*>(objectC));
	}
	return (NULL);
}

void identify(Base* p) {
	A* objectA = dynamic_cast<A*>(p);
	B* objectB = dynamic_cast<B*>(p);
	if (objectA)
		std::cout << "A" << std::endl;
	else if (objectB)
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		A objectA;
		objectA = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::bad_cast& e) {
		try {
			B objectB;
			objectB = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (const std::bad_cast& e) {
			C objectC;
			objectC = dynamic_cast<C&>(p);
			std::cout << "C" << std::endl;
		}
	}
}