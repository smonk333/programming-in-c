#include<stdio.h>
int main(void)
{
	int input, intOutput, yesNo, evenOdd, inputType;
	char charOutput;
	/* inputType is used to determine how to print the output.
	   setting it to 1 means the output will be printed using %i,
	   setting it to 0 means the output will be printed using %c.

	   yesNo is used to gather the input from $user to determine if the 
	   while loop should run again.

	   evenOdd is used to hold info about whether input / 2 gives a remainder.
	   odd = 1
	   even = 0
	*/

	yesNo = 1;

	while(yesNo = 1) {
		printf("\nEnter a letter or number from the keyboard: ");
		scanf("%c", &input);

		if(input >= 0 && input <= 9) {
			if(input % 2 == 1) {
				inputType = 1;	// input was an even number
				evenOdd = 1;
			}
			else {
				inputType = 1;  // input was an odd number
				evenOdd = 0;
			}
		}
		else if(input >= 65 && input <= 90) {
			inputType = 0;			// input was an uppercase letter
			charOutput = input + 32;
		}
		else if(input >= 97 && input <= 122) {
			inputType = 0;			//input was a lowercase letter
			charOutput = input - 32;
		}
		else {
			printf("\ninvalid character entered.\n");
		}

		printf("Would you like to go again? Enter 1 for yes, 0 for no. : ");
		scanf("%i", &yesNo);
/*
		if(yesNo != 1 && yesNo != 0){
			while(yesNo != 1 && yesNo != 0) {
				printf("\nInvalid input. Enter 1 to go again, or 0 to quit: ");
				scanf("%i", &yesNo);
			}
		
		}

		*/
	}
}