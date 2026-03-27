#include "logic.h"

bool is_power_of_three(int number) {

	//base case
	if (number == 1) {
		return true;
	}

	if (number <= 0 || number % 3 != 0) {
		return false;
	}

	//recursion case
	return is_power_of_three(number / 3);
}
