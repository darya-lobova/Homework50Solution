#include "logic.h"

//developing time: 4 minutes
//best case: O(1)
//worst case: O(N)

int main() {

	int number;

	cout << "Input any number: ";
	cin >> number;

	int result = find_max_digit(number);

	cout << "Max digit in this number is " << result;

	return 0;
}