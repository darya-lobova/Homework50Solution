#include "logic.h"

int find_max_digit(int number) {

	number = number < 0 ? -number : number;

	//base case
	if (number <= 9) {
		return number;
	}

	//recursion case
	return (number % 10 > find_max_digit(number / 10)) ? (number % 10) : find_max_digit(number / 10);
}