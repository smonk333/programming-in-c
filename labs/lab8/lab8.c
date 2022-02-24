#include <stdio.h>
#include <stdlib.h>

void initWithInput(int arr1[]);
void initWithRandom(int arr1[]);
int findSecondHighest(int arr1[]);
int findHighest(int arr1[]);
int findInnerProduct(int arr1[], int arr2[]);

#define ASIZE 20

void initWithInput(int arr1[])
{
	int i = 0, j = 0, a = 0;
	
	for(i = 0; i < ASIZE; ++i){
		scanf("%i", &arr1[i]);
	}
	for (i = 0; i < ASIZE; ++i){
		for (j = i + 1; j < ASIZE; ++j){
			if (arr1[i] > arr1[j]){
				a = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = a;
			}
		}
	}
	return;
}

void initWithRandom(int arr1[])
{
	int i = 0, j = 0, a = 0;

	for (i = 0; i < ASIZE; ++i){
		arr1[i] = rand() % 50 + 1;
	}
	for (i = 0; i < ASIZE; ++i){
		for (j = i + 1; j < ASIZE; ++j){
			if (arr1[i] > arr1[j]){
				a = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = a;
			}
		}
	}

	return;
}

int findHighest(int arr1[])
{
	int max = 0, i = 0;
	for (i = 0; i < ASIZE; ++i){
		if(arr1[i] > max) {
            max = arr1[i];
        }
  }
  return max;      
}

int findSecondHighest(int arr1[])
{
	int i = 0, secMax = 0, max = findHighest(arr1);
	for (i = 0; i < ASIZE; ++i){
		if(secMax < max){
			secMax = arr1[i-1];
		}
	}
	return secMax;
}

int findInnerProduct(int arr1[], int arr2[])
{
	int i = 0, product = 0; 
		for (i = 0; i < ASIZE; ++i){
    	product += arr1[i] * arr2[i];
	}
	return product;
}

int main(void)
{
	int arr1[ASIZE], arr2[ASIZE], i = 0, max1 = 0, max2 = 0, secondMax = 0, product = 0;

	printf("Enter 20 integers to initialize arr1: ");
	initWithInput(arr1);

	printf("\n\narr1:\n");

	for(i = 0; i < ASIZE; ++i){
		printf("%i\n", arr1[i]);
	}
		
	printf("\n\nInitializing arr2...\n\narr2:\n");
	initWithRandom(arr2);

	for(i = 0; i < ASIZE; ++i){
		printf("%i\n", arr2[i]);
	}

	secondMax = findSecondHighest(arr1);
	printf("\nSecond highest in arr1 is: %i\n", secondMax);

	secondMax = findSecondHighest(arr2);
	printf("\nSecond highest in arr1 is: %i\n", secondMax);

	product = findInnerProduct(arr1, arr2);
	printf("\n\ninner product is: %i\n", product);

	return 0;
}