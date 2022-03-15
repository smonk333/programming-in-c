#include<stdio.h>
int processLED(int ledAvg[]);

int main(void){
	int count = 0, dateIn[3], led1[6] = {0}, led2[6] = {0}, led3[6] = {0}, led4[6] = {0}, month, day, year, highest = 0, c;

	do {
		scanf("%d", &dateIn[count++]);
	} while(getchar() != '\n' && count < 3);
		
	count = 0;
	do {
		scanf("%d", &led1[count++]);
	} while(getchar() != '\n' && count < 6);
		
	count = 0;
	do {
		scanf("%d", &led2[count++]);
	} while(getchar() != '\n' && count < 6);
		
	count = 0;
	do {
		scanf("%d", &led3[count++]);
	} while(getchar() != '\n' && count < 6);
		
	count = 0;
	do {
		scanf("%d", &led4[count++]);
	} while(getchar() != '\n' && count < 6);



	month = dateIn[0];
	day = dateIn[1];
	year = dateIn[2];

	printf("Test date: %i/%i/%i\n", month, day, year);
	printf("LED Lumens\n");

	
}

int processLED(int ledAvg[]){
	int highest = 0, testCount = 0, position = 0;



return highest;
}