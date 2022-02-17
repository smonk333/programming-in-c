// fixing broken.c

/* This program creates an array containing 10 integers
   and then at the bottom checks to see if the number 11 
	is in the array.

   Note: the program contains a bug that only shows up when 
	it is run.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    int table[10];
    int count = 0;
    int search;
	int number = 5; 
	int eleven = 0;  

	table[0] = 5;

	count = 1;
    while (count < 10) {
		 table[count] = number++ * 2;
       count++;
    }

    for (i = 0; i < 10; i++) {
        
           if (table[i] == 11 || count < i);{
           		eleven = 1;
        } 
    }

    if (i == count) {
       printf("The number 11 is not in the table.\n");
    }
    else {
        if(eleven == 1){
       printf("The number 11 is in the table at location: %d\n", i-1);
        }
    }
    

    return 0;
}
