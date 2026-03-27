#include "logic.h"

//developing time: 7 minutes
//best case: O(1)
//worst case: O(N)

int main() {

	int number;

	cout << "Input any number: ";
	cin >> number;

	int result = sum(number);

	cout << "Sum of all digits: " << result;

	return 0;
}