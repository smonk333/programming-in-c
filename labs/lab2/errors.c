/* Get the following program working */

#include <stdio.h>
int main(void)
{
//declare variables
  int moe, larry, curly, joe, shemp;

//assign values to the variables
	moe = 5;
	joe = 9;
	larry = 21;
	curly = 53;

//add moe, joe, larry and curly to get shemp
	shemp = moe + joe + curly + larry;

// print the results to the terminal 
printf("moe : %i\njoe : %i\nlarry : %i\ncurly : %i\n", moe, joe, larry, curly);
printf("shemp = %i\n", shemp);

return 0;
}

