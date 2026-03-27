#include "logic.h"

//developing time: 10 minutes
//best case: O(1)
//worst case: O(N)

int main() {

	int number;

	cout << "Input any number: ";
	cin >> number;

	bool result = is_power_of_three(number);

	string msg = result ? "Yes" : "No";
	cout << "Is this number exact power of 3? " << msg;

	return 0;
}