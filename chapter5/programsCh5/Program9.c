// program to evaluate simple expressions of the form number operator number //
#include<stdio.h>

int main(void)
{
	float val1, val2;
	char operator;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &val1, &operator, &val2);

	switch(operator)
	{
		case '+':
			printf("%.2f\n", val1 + val2);
			break;
		case '-':
			printf("%.2f\n", val1 - val2);
			break;
		case '*':
			printf("%.2f\n", val1 * val2);
			break;
		case '/':
			if(val2 == 0)
				printf("Division by zero.\n");
			else
				printf("%.2f\n", val1 / val2);
			break;
		default:
			printf("Unknown operator.\n");
			break;
	}

	return 0;
}