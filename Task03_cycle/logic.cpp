#include "logic.h"

int find_max_digit(int number) {

	number = number < 0 ? -number : number;

	if (number <= 9) {
		return number;
	}

	int max = 0;
	while (number > 0) {
		int digit = number % 10;
		if (digit > max) {
			max = digit;
		}
		number /= 10;
	}

	return max;
}