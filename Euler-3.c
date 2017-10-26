//Euler Problem 3 by Jake Fox 2017
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>
#include <math.h>

int bignumber = 13195;
int i = 1;
int j = 0;
int factors[];


int main(void) {
	
		while (i > 0 && i < bignumber){
		i++;
			if (13195 % i == 0){
			factors[j] = i;
			j++;
			printf("... %d ... ", i);
		}
	}
	return 0;
}
