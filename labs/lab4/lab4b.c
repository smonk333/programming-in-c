// for loop version of lab 4 //

#include<stdio.h>
int main(void)
{
	int count, sum = 0, i = 1;

	printf("Enter an integer: ");
	scanf("%i", &count); 					  // set counter to run the for loop as many times as $user wants us to
	printf("    Value         Sum\n");       // print headers

	for(i = 1; count >= 1; count--) {
		sum += i; 						  // setting sum variable to (itself) + i
		printf("%9i% 12i\n", i, sum); 	 // printing the table values before incrementing i (and formatting the output)
		i *= 2; 						// setting i to (itself) * 2
	}

	return 0;
}