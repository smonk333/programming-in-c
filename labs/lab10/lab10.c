#include "defs.h"
#include <stdio.h>

int main(void)
{
	int i = 0;
	food foodIn[8];
	while(i >= 8) {
		scanf("%s %s %i %f %f %f", foodIn[i].item, foodIn[i].quantity, &foodIn[i].calories, &foodIn[i].protein, &foodIn[i].carbs, &foodIn[i].fats);
		i++;
	} 



return 0;
}