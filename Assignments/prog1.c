#include<stdio.h>
#include<math.h>
int main(void)
{
      // initializing constants //
	const int fat = 9, protein = 4, carbohydrates = 4, alcohol = 7;

	int fatGram, proGram, carGram, alcGram;
	float fatPerc, proPerc, carPerc, alcPerc, totPerc;

	printf("Enter fat grams: ");
	scanf("%i", &fatGram);

	printf("Enter protein grams: ");
	scanf("%i", &proGram);

	printf("Enter carbohydrate grams: ");
	scanf("%i", &carGram);

	printf("Enter alcohol grams: ");
	scanf("%i", &alcGram);

	// calculations //

	// (yes i know i reused the *Gram variables here, //
	// i just really didn't want to initialize even more variables) //
	
	fatGram *= fat;
	proGram *= protein;
	carGram *= carbohydrates;
	alcGram *= alcohol;

	totPerc = fatGram + proGram + carGram + alcGram;

	fatPerc = (fatGram * 100.0f) / totPerc;
	proPerc = (proGram * 100.0f) / totPerc;
	carPerc = (carGram * 100.0f) / totPerc;
	alcPerc = (alcGram * 100.0f) / totPerc;

	printf("%i, %i, %i, %i\n\n", fatGram, proGram, carGram, alcGram);
	printf("%.1f, %.1f, %.1f, %.1f", fatPerc, proPerc, carPerc, alcPerc);
	return 0;
}