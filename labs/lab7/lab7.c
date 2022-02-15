#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array1[20], array2[20], i, j, max1 = 0, max2 = 0, secondMax1 = 0, secondMax2 = 0;

	// initialize array1

	printf("Enter 20 integers to initialize array1: ");

	for (i = 0; i <= 19; ++i){
		scanf("%i", &array1[i]);
	}

	printf("\narray1:\n");

	for (i = 0; i<= 19; ++i){
		printf("%i\n", array1[i]);
	}

	// initialize array2

	for (i = 0; i <= 19; ++i){
		array2[i] = rand() % 50 + 1;
	}

	printf("\narray2:\n");

	for (i = 0; i <= 19; ++i){
		printf("%i\n", array2[i]);
	}

	for (i = 0, j = 0; i <= 19 && j <= 19; ++i, ++j){

		if(array1[i] > max1) {
            secondMax1 = max1;
            max1 = array1[i];
        }

        else{
			if(array1[i] > secondMax1){
				secondMax1 = array1[i];
			}
	    }

	    if(array2[j] > max2) {
            secondMax2 = max2;
            max2 = array2[j];
        }

        else{
			if(array2[j] > secondMax2){
				secondMax2 = array2[j];
			}
	    }

	}

	printf("\n%i\n%i", secondMax1, secondMax2);
}