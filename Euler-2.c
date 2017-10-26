//Euler Problem 1 by Jake Fox 2017

#include <stdio.h>

int i;
int sum;

int main(void) {

	for (i = 0; i < 1000; i++){
	if (i % 3 == 0 || i % 5 == 0){
	sum += i;
	}
}
	printf("Sum of Multiples of 3 and 5 below 1000 ... %d\n", sum);
	return 0;
}
