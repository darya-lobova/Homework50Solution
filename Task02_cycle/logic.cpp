#include "logic.h"

bool is_power_of_three(int number) {

	if (number <= 0 || number % 3 != 0) {
		return false;
	}

	while (number % 3 == 0) {
		number /= 3;
	}
	return number == 1 ? true : false;
}