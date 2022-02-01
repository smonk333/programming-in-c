#include<stdio.h>
int main(void)
{
	int  test, yesNo = 1, inputType;
	char charInput, charOutput;
	/* inputType is used to determine how to print the output.
	   setting it to 1 means the output will be printed as "even" or "odd",
	   setting it to 2 or 3 means the output will be printed using %c.

	   yesNo is used to gather the input from $user to determine if the 
	   while loop should run again.
	*/

	do {
		printf("Enter a letter or number from the keyboard: ");
		scanf(" %c", &charInput);
		if(charInput >= 48 && charInput <= 57){
			inputType = 1; // input was a number
		}
		else if(charInput >= 65 && charInput <= 90){
			inputType = 2; // input was an uppercase letter
		}
		else if(charInput >= 97 && charInput <= 122){
			inputType = 3; // input was a lowercase letter
		}
		else {
			printf("\ninvalid character entered.\n");
		}

		if(inputType == 1) {
			test = (int) charInput % 2;
			if(test == 1) {
				printf("You entered an odd number\n");
			}
			else {
				printf("You entered an even number\n");
			}
		}
		else if(inputType == 2) {
			charOutput = charInput + 32;
			printf("The lower case of that letter is %c\n", charOutput);
		}
		else if(inputType == 3) {
			charOutput = charInput - 32;
			printf("The upper case of that letter is %c\n", charOutput);
		}


		printf("Would you like to go again? Enter 1 for yes, 0 for no. : ");
		scanf("%i", &yesNo);

		if(yesNo != 1 && yesNo != 0){
			while(yesNo != 1 && yesNo != 0) {
				printf("\nInvalid input. Enter 1 to go again, or 0 to quit: ");
				scanf("%i", &yesNo);
			}
		}
	}
	while(yesNo == 1);
	
	return 0;
}