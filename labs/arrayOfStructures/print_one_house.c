#include<stdio.h>
#include "houses.h"

void print_one_house(struct house a)	{
	printf("%2d%10d%9d%7d%9.4f%8d\n", a.id, a.beds, a.baths, a.sqft, a.acres, a.price);
}