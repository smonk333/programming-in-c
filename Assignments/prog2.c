// Garrett Boling, Assignment 2

#include<stdio.h>
int main(void)
{
	int countryCode = 0, arrayCode = 0, count = 0;
	const double currency[] = {1.6329, 0.9190, 0.0017, 0.1739, 1.2953, 0.0271};
	//                          GBP      CAD     CLP    DKK     EUR      RUB
	double moneyIn, moneyOut;

/* uncomment this to print a table with the country codes and which
   currency each one corresponds with.

	printf("Country Code            Currency       \n");
	printf("---------------------------------------\n");
	printf("     1           British Pound Sterling\n");
	printf("     2           Canadian Dollar       \n");
	printf("     3           Chilean Peso          \n");
	printf("     4           Danish Krone          \n");
	printf("     5           Eurozone Euro         \n");
	printf("     6           Russian Ruble         \n");
*/

	do {
		printf("\nEnter a country code, zero to end: ");
		scanf("%i", &countryCode);

		if (countryCode > 6 || countryCode < 0) {
			printf("\n%i is an invalid country code!\n", countryCode);
		}

		else {

			arrayCode = countryCode - 1;

			switch(countryCode) {
				case 1 :
				printf("Enter GBP: ");
				scanf("%lf", &moneyIn);

				count++;
				moneyOut = currency[arrayCode] * moneyIn;

				printf("%.2f GBP = %.2f USD\n", moneyIn, moneyOut);

				break;

				case 2 :
				printf("Enter CAD: ");
				scanf("%lf", &moneyIn);

				count++;
				moneyOut = currency[arrayCode] * moneyIn;

				printf("%.2f CAD = %.2f USD\n", moneyIn, moneyOut);

				break;

				case 3 :
				printf("Enter CLP: ");
				scanf("%lf", &moneyIn);

				count++;
				moneyOut = currency[arrayCode] * moneyIn;

				printf("%.2f CLP = %.2f USD\n", moneyIn, moneyOut);

				break;

				case 4 :
				printf("Enter DKK: ");
				scanf("%lf", &moneyIn);

				count++;
				moneyOut = currency[arrayCode] * moneyIn;

				printf("%.2f DKK = %.2f USD\n", moneyIn, moneyOut);

				break;

				case 5 :
				printf("Enter EUR: ");
				scanf("%lf", &moneyIn);

				count++;
				moneyOut = currency[arrayCode] * moneyIn;

				printf("%.2f EUR = %.2f USD\n", moneyIn, moneyOut);

				break;

				case 6 :
				printf("Enter RUB: ");
				scanf("%lf", &moneyIn);

				count++;
				moneyOut = currency[arrayCode] * moneyIn;

				printf("%.2f RUB = %.2f USD\n", moneyIn, moneyOut);

				break;

				default:

				break;

			}
		}

	}

	while (countryCode != 0);

	printf("\n%i conversions done\n", count);

	return 0;
}