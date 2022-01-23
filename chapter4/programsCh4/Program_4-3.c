// program to generate a table of triangular numbers //

#include<stdio.h>

int main(void)
{
	int n, triangularNumber = 0;

	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n     Sum from 1 to n\n");
	printf("---    ---------------\n");

	for(n = 1 ; n <= 10; ++n) {
		triangularNumber += n;
		printf(" %2i                  %i\n", n, triangularNumber);
	}

	return 0;
}