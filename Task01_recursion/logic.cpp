#include "logic.h"

int sum(int number) {
	number = number < 0 ? -number : number;

	int sum = 0;

	//base case
	if (number <= 9) {
		return number;
	}

	//recursion case

	return sum;
}