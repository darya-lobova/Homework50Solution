#include "logic.h"

int sum(int number) {
	number = number < 0 ? -number : number;

	//base case
	if (number <= 9) {
		return number;
	}

	//recursion case
	return (number % 10) + sum(number / 10);
}