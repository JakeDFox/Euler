//Euler Problem 6 by Jake Fox 2017

#include <stdio.h>
#include <math.h>

int sum = 0;
int i = 1;
int sumofsqrs = 0;
int sqrofsumfinal = 0;

int sqrofsum(int param){
	return param * param;
}

int result = 0;

int main(void) {
	
		while (i > 0 && i < 101){
		sumofsqrs += (i * i);
		sum += i;
		i++;
		}
		
		sqrofsumfinal = sqrofsum(sum);
		result = sqrofsumfinal - sumofsqrs;
		
		printf("The answer is < %d >", result);
		
	return 0;
}
