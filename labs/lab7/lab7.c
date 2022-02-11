#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array1[20], array2[20], i;

	// initialize array1

	printf("Enter 20 integers to initialize array1: ");

	for (i = 0; i <= 19; ++i){
		scanf("%i", &array1[i]);
	}

	for (i = 0; i<= 19; ++i){
		printf("slot %i in array1 is %i\n", i, array1[i]);
	}

	// initialize array2

	for (i = 0; i <= 19; ++i){
		array2[i] = rand() % 51;
	}

	for (i = 0; i<= 19; ++i){
		printf("slot %i in array2 is %i\n", i, array2[i]);
	}

}