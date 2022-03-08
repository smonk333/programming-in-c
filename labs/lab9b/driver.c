#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

#define ASIZE 20

int main(void)
{
	int arr1[ASIZE], arr2[ASIZE], i = 0, secondMax1 = 0, secondMax2 = 0, product = 0;

	printf("Enter 20 integers to initialize arr1:\n");
	initWithInput(arr1);

	printf("\nInitializing arr2...\n");
	initWithRandom(arr2);

	product = findInnerProduct(arr1, arr2);

	printf("\narr1:\n");

	for(i = 0; i < ASIZE; ++i){
		printf("%i\n", arr1[i]);
	}
	
	printf("\narr2:\n");
	
	for(i = 0; i < ASIZE; ++i){
		printf("%i\n", arr2[i]);
	}



	sorting(arr1);
	//print sorted contents of arr1
	/*for(i = 0; i < ASIZE; i++){
		printf("arr1 slot %i = %i\n", i, arr1[i]);
	}*/
	sorting(arr2);
	/*for(i = 0; i < ASIZE; i++){
		printf("arr2 slot %i = %i\n", i, arr2[i]);
	}*/

	secondMax1 = findSecondHighest(arr1);
	printf("\nSecond highest in arr1 is: %i\n", secondMax1);

	secondMax2 = findSecondHighest(arr2);
	printf("\nSecond highest in arr2 is: %i\n", secondMax2);

	
	printf("\n\ninner product is: %i\n", product);

	return 0;
}