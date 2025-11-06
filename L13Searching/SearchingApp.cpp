#include "Searching.h"
#include <iostream>
using namespace std;
int main() {
	int aux, result;
	array<int, 10> a = { 2, 5, 7, 3, 4, 2, 9, 12, 1, 5 };

	cout << "Enter an integer number: ";
	cin >> aux;

	result = linearSearch(a, aux);
	if (result == -1) {
		cout << "Element not found" << endl;
	}
	else {
		cout << "The number " << aux << " is in the position " << result << endl;
	}
}