#include<stdio.h>
#include<stddef.h>

#define ASIZE 20

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