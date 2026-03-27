#include "logic.h"

//developing time: 22 minutes
//best case: O(N)
//worst case: O(N)

int main() {

	int number;

	cout << "Input any number: ";
	cin >> number;

	int result = find_max_digit(number);

	cout << "Max digit in this number is " << result;

	return 0;
}