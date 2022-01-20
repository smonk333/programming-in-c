#include<stdio.h>
int main(void)
{
    // initializing constants //
	const int fat = 9, protein = 4, carbohydrates = 4, alcohol = 7;
    // initializing variables //
	int fatGram, proGram, carGram, alcGram, fatCalo, proCalo, carCalo, alcCalo;
	float fatPerc, proPerc, carPerc, alcPerc, totCalo, totPerc;

	printf("\nEnter fat grams: ");
	scanf("%i", &fatGram);

	printf("Enter protein grams: ");
	scanf("%i", &proGram);

	printf("Enter carbohydrate grams: ");
	scanf("%i", &carGram);

	printf("Enter alcohol grams: ");
	scanf("%i", &alcGram);

	// calculations //
	
	fatCalo = fatGram * fat;
	proCalo = proGram * protein;
	carCalo = carGram * carbohydrates;
	alcCalo = alcGram * alcohol;

	totCalo = fatCalo + proCalo + carCalo + alcCalo;

	fatPerc = (fatCalo * 100) / totCalo;
	proPerc = (proCalo * 100) / totCalo;
	carPerc = (carCalo * 100) / totCalo;
	alcPerc = (alcCalo * 100) / totCalo;

	totPerc = fatPerc + proPerc + carPerc + alcPerc;

	// printf("%i, %i, %i, %i\n\n", fatGram, proGram, carGram, alcGram);
	// printf("%.1f, %.1f, %.1f, %.1f\n\n", fatPerc, proPerc, carPerc, alcPerc);
	// uncomment the lines above to test the output of the calculations //

	// Print everything //

	printf("%40s\n", "Grams Calories Percent");
	printf("Fat: %18i %8i %7.1f\n", fatGram, fatCalo, fatPerc);
	printf("Protein: %14i %8i %7.1f\n", proGram, proCalo, proPerc);
	printf("Carbohydrates: %8i %8i %7.1f\n", carGram, carCalo, carPerc);
	printf("Alcohol: %14i %8i %7.1f\n\n", alcGram, alcCalo, alcPerc);
	printf("TOTAL: %25i %7.1f\n", (int)totCalo, totPerc);

	return 0;
}