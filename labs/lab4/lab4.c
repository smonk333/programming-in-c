// while loop version of lab 4 //

#include<stdio.h>
int main(void)
{
	int count, sum = 0, i = 1;

	printf("Enter an integer: ");
	scanf("%i", &count); 					  // set counter to run the while loop as many times as $user wants us to
	printf("    Value         Sum\n");       // print headers

	while(count >= 1) {
		sum += i; 						  // setting sum variable to (itself) + i
		printf("%9i% 11i\n", i, sum); 	 // printing the table values before incrementing i (and formatting the output)
		i *= 2; 						// setting i to (itself) * 2
		count --; 					   // decrementing the counter by 1 
	}
	return 0;
}