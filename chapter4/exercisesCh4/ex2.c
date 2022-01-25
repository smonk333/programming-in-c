// program to generate a table of squared numbers //

#include<stdio.h>

int main(void)
{
	int n, squareNumber = 0;

	printf("TABLE OF SQUARE NUMBERS\n\n");
	printf(" n     Product of n^2\n");
	printf("---    --------------\n");

	for(n = 1 ; n <= 10; ++n) {
		squareNumber = n * n;
		printf(" %2i               %3i\n", n, squareNumber);
	}

	return 0;
}