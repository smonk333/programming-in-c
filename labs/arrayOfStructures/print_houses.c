#include<stdio.h>
#include "houses.h"

void print_houses(struct house a[], int n)	{
	print_header();
	for(int i = 0; i < n; i++)	{
		print_one_house(a[i]);
	}
}