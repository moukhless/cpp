#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	A objA;
	B objB;
	C objC;

	Base& baseRef1 = objA;
	Base& baseRef2 = objB;
	Base& baseRef3 = objC;
	Base* basePtr = generate();
	identify(basePtr);
	identify(baseRef1);
	identify(baseRef2);
	identify(baseRef3);
	return 0;
}