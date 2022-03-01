#include<stdio.h>
#include<stdlib.h>

#define ASIZE 20

void initWithInput(int arr1[])
{
	int i = 0;
	
	for(i = 0; i < ASIZE; ++i){
		scanf("%i", &arr1[i]);
	}
	return;
}

void initWithRandom(int arr2[])
{
	int i = 0;

	for (i = 0; i < ASIZE; ++i){
		arr2[i] = rand() % 50 + 1;
	}
	return;
}