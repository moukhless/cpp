#include "Serializer.hpp"

int main() {
	Data myObject;
	Data *myPointer = &myObject;

	uintptr_t uintptrValue = Serializer::serialize(myPointer);
	Data *newPointer = Serializer::deserialize(uintptrValue);
	std::cout << "myPointer: " << myPointer << std::endl;
	std::cout << "newPointer: " << newPointer << std::endl;
}