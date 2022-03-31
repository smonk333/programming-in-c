#include<stdio.h>
#include "houses.h"

void print_price(struct house a[], int n, int minprice, int maxprice)	{

	print_header();

	for(int i = 0; i < n; i++)	{
		if(a[i].price >= minprice && a[i].price <= maxprice)	{
			print_one_house(a[i]);
		}
	}
}