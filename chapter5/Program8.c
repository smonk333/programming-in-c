// program to evaluate simple expressions of the form number operator number //
#include<stdio.h>

int main(void)
{
	float val1, val2;
	char operator;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &val1, &operator, &val2);

	if(operator == '+')
		printf("%.2f\n", val1 + val2);
	else if(operator == '-')
		printf("%.2f\n", val1 - val2);
	else if(operator == '*')
		printf("%.2f\n", val1 * val2);
	else if(operator == '/')
		printf("%.2f\n", val1 / val2);

	return 0;
}