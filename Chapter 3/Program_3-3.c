  /////////////////////////////////
 // More arithmetic expressions //
/////////////////////////////////

#include <stdio.h>
int main(void)
{
	//Declare and initialize variables
	int a, b;
	float c, d;

	a = 25;
	b = 2;
	c = 25.0;
	d = 2.0;

	printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
	printf ("a / b * b = %i\n", a / b * b);
	printf ("c / d * d = %f\n", c / d * d);
	printf ("-a = %i\n", -a);

	return 0;

}