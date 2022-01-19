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
	fatGram *= fat;
	proGram *= protein;
	carGram *= carbohydrates;
	alcGram *= alcohol;

	totPerc = fatGram + proGram + carGram + alcGram;

	fatPerc = (fatGram * 100.0) / totPerc;
	proPerc = (proGram * 100.0) / totPerc;
	carPerc = (carGram * 100.0) / totPerc;
	alcPerc = (alcGram * 100.0) / totPerc;


	printf("%.2f, %.2f, %.2f, %.2f", fatPerc, proPerc, carPerc, alcPerc);
	return 0;
}