#include<stdio.h>
int main(void)
{
	////////////////////////////
   // initializing constants //
  ////////////////////////////
	const int fat = 9, protein = 4, carbohydrates = 4, alcohol = 7;

	int fatGr, proGr, carGr, alcGr;
	double fatPe, proPe, carPe, alcPe;

	printf("Enter fat grams: ");
	scanf("%i", &fatGr);

	printf("Enter protein grams: ");
	scanf("%i", &proGr);

	printf("Enter carbohydrate grams: ");
	scanf("%i", &carGr);

	printf("Enter alcohol grams: ");
	scanf("%i", &alcGr);

	//calculations
	fatPe = (double)fat * fatGr;
	proPe = (double)protein * proGr;
	carPe = (double)carbohydrates * carGr;
	alcPe = (double)alcohol * alcGr;

	printf("%i, %i, %i, %i", fatPe, proPe, carPe, alcPe);
	return 0;
}