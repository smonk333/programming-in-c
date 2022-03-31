#include <stdio.h>
#include "houses.h"

int main(void){
	int i, n, beds;
	int ans, minprice, maxprice;
	float acres;
	FILE *fp;
	char filename[80];

	printf("Input file : ");
	scanf("%s", filename);
	if ( (fp = fopen(filename,"r")) == NULL) {
		fprintf(stdout,"File %s not found.\n", filename);
		return 1;
	}

	fscanf(fp, "%d", &n);

	struct house a[n];

	for (i=0; i<n; ++i) {
		fscanf(fp,"%d", &a[i].id);
		fscanf(fp,"%d", &a[i].beds);
		fscanf(fp,"%d", &a[i].baths);
		fscanf(fp,"%d", &a[i].sqft);
		fscanf(fp,"%f", &a[i].acres);
		fscanf(fp,"%d", &a[i].price);
	}
	fclose(fp);
	
	do {
		printf("\n");
		printf("1. Houses with minimum number of bedrooms.\n");
		printf("2. Houses on lot greater than n acres.\n");
		printf("3. Houses in a price range.\n");
		printf("4. Print all houses.\n");
		printf("9 to quit\n\n");
		printf("Enter an option : ");
		scanf("%d", &ans);

		if      (ans == 1) {
			printf("minimum number of bedrooms : ");
			scanf("%d", &beds);
			print_bedrooms(a, n, beds);
		}
		else if (ans == 2) {
			printf("minimum lot size : ");
			scanf("%f", &acres);
			print_lot(a, n, acres);
		}
		else if (ans == 3) {
			printf("enter price range [min max] : ");
			scanf("%d%d", &minprice, &maxprice);
			print_price(a, n, minprice, maxprice);
		}
		else if (ans == 4) print_houses(a, n);
	} while ( ans != 9);
	
	return 0;
}

