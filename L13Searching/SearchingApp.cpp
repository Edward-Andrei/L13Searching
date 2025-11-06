#include "Searching.h"
#include <iostream>
int main() {
	std::array<int, 10> a = { 2,5,6,6,8,12,25,25,25,27 };
	int result;
	result = binarySearchFirst(a, 25);
	if (result == -1) {
		std::cout << "Element not found at array" << std::endl;
	}
	else {
		std::cout << "Element found at index: " << result << std::endl;
	}
}
