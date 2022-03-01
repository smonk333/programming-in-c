#include<stdio.h>
#include<stdlib.h>

#define ASIZE 20

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
    int i = 0, secMax = 0, maximum = findHighest(arr1);
    for (i = 0; i < ASIZE; ++i){
        secMax = arr1[i];
        if(secMax == maximum){
            secMax = arr1[i-1];
        }
    }
    while(secMax == maximum){
        i--;
        secMax = arr1[i];
    }
    return secMax;
}

void sorting(int arr1[])
{
    int i = 0, j = 0, a = 0;
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