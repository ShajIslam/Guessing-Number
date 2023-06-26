
#include <stdio.h>
#include <time.h>

/*
int main(void) {
	int n, trials, input;
	
	scanf("%d %d", &n, &trials);
	
	while(trials > 0) {
		scanf("%d", &input);
		if(input == n) {
			printf("Right, Player-2 wins!\n");
			trials = 0;
		}
		else {
			trials--;
			printf("Wrong, %d Choice(s) Left!\n", trials);
		}
	}
	
	return 0;
}
*/

void main(void) {
	int n, input, i;
	int tries = 10;
	time_t t;
	srand((unsigned) time(&t));
	
	n = rand()%1000;
	
	for(i = 0; i < tries; i++) {
		printf("Guess a number from 0 to 1000: ");
		scanf("%d", &input);
		if(input == n) {
			printf("Right answer. %d is the correct number!\n", input);
			i = 11;
		}
		else if(input > n) {
			printf("Incorrect. The input value is bigger than the guessing number.\n\nRemaining tried: %d\n", tries-i-1);
		}
		else if(input < n) {
			printf("Incorrect. The input value is smaller than the guessing number.\n\nRemaining tried: %d\n", tries-i-1);
		}
	}
	if(i == 10) {
		printf("You have lost the game. The correct number was: %d\n", n);
	}
}

