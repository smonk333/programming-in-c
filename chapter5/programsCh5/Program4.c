// program to determine the parity of a number //

#include<stdio.h>

int main(void)
{
	int numberToTest, remainder;

	printf("Enter your number to test: ");
	scanf("%i", &numberToTest);

	remainder = numberToTest % 2;

	if(remainder == 0)
		printf("The number is even.\n");
	else
		printf("The number is odd.\n");

	return 0;
}