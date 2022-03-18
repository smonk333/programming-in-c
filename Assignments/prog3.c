#include<stdio.h>
#include<math.h>

int processLED(int);
int processLumens();

int main(void){
	int month, day, year, m, n, i = 1, k, max = 0;

	scanf("%i%i%i", &month, &day, &year);
	printf("Test date: %d/%d/%d\nLED Lumens\n", month, day, year);

	do{
		fscanf(stdin, "%d", &n);
		if(feof(stdin)) break;
		printf("%5d", i);
		m = processLED(n);
		if(m > max){
			max = m;
			k = i;
	}
	i++;
}while(1);

printf("LED bulb %d has the highest average reading of %d lumens\n", k, max);
}

int processLED(int n){
	int dat[n], ret;

	for(int count = 0; count < n; count++){
		scanf("%d", &dat[count]);
	}
	ret = processLumens(dat, n);
return ret;
}

int processLumens( int n, int number[]){
	int total = 0, ret;
	for(int count = 0; count < n; count++){
		printf("%5d", number[count]);
		total += number[count];
	}
	ret = rint((float)total/n);
	printf(" Avg = %i\n", ret);
	return ret;
}