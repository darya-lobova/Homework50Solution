#include "logic.h"

int sum(int number) {
	number = number < 0 ? -number : number;

	int sum = 0;

	while (number > 0) {
		int digit1 = number % 10;
		sum += digit1;
		number /= 10;
	}
	return sum;
}