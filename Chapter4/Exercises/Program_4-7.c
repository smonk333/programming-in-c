// program to find GCD of two nonnegative integer values //
#include<stdio.h>
int main(void)
{
	int u, v, temp;

	printf("please type in the first nonnegative integer: ");
	scanf("%i", &u);
	printf("please type in the second nonnegative integer: ");
	scanf("%i", &v);

	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	printf("their greatest common divisor is %i\n", u);

	return 0;
	
}

