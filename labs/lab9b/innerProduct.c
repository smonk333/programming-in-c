#include<stdio.h>
#include<stdlib.h>

#define ASIZE 20

int findInnerProduct(int arr1[], int arr2[])
{
	int i = 0, product = 0; 
		for (i = 0; i < ASIZE; ++i){
    	product += arr1[i] * arr2[i];
	}
	return product;
}