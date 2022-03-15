#include<stdio.h>
#include<math.h>

//function prototypes
int processLED(int);
int processLumens();

//main function
int main(int argc, char*argv[])
{
int month, day, year, max, n, i, k, m;
max = 0;

fscanf(stdin, "%d%d%d", &month, &day, &year);

printf("Test date: %d/%d/%d\n", month, day, year);

printf("LED Lumens\n");

i = 1;
do{
	fscanf(stdin, "%d", &n);
	if(feof(stdin)) break;
		printf("%5d", i);
	m = processLED(n);
	if(m> max){
		max = m;
		k = i;
	}
	i++;
}while(1);

printf("LED bulb %d has the highest average reading of %d lumens", k, max);
}


