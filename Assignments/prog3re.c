#include<stdio.h>
#include<math.h>

int processLED(int);
int processLumens();

int main(void){
	int highestAvg = 0, month, day, year, i = 1, current, highestTrack, bubble;

	scanf("%i%i%i", &month, &day, &year);
	printf("Test date: %i/%i/%i\nLED Lumens\n", month, day, year);

	do{
		fscanf(stdin, "%i", &current);
		if(feof(stdin)) break;
		printf("%5d", i);
		bubble = processLED(current);
		if(bubble > highestAvg){
			highestAvg = bubble;
			highestTrack = i;
		}
		i++;
}while(1);

printf("LED bulb %i has the highest average reading of %i lumens", highestTrack, highestAvg);
}

int processLED(int n){
	int total = 0, dat[n], ret;

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