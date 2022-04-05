#include <stdio.h>
#include <stdlib.h>

int loadBulbs(int [], int);
void printBulbs(int [], int);
int minRead(int [], int);
int maxRead(int [], int);
int averageRead(int [], int);
float suspectCount(int [], int, int, float);
int rangeFinder(int, int);

// BEGIN LOADING BULB DATA

int loadBulbs(int readings[], int maxReading) {
  int hold = 0;
  int inputCount = 0;

    while(!feof(stdin)) {
      scanf("%d ", &hold);
      readings[inputCount++] = hold;

      if(inputCount > maxReading) {
        printf("This file has a number of readings that exceeds the maximum allowed (%d)\n", maxReading);
        exit(1);
    }
  }
      return inputCount;
}

// BEGIN PRINTING BULB DATA

void printBulbs(int readings[], int howMany){
  printf("========================================\n");
  printf("%d Readings\n", howMany);
  printf("========================================\n");

  for(int i = 0; i < howMany; i++){
    printf("%d ", readings[i]);
    if((i+1)%10 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  printf("========================================\n");
  printf("Statistics\n");
  printf("========================================\n");
}

// BEGIN FINDING MINIMUM

int minRead(int readings[], int howMany) {
  int min = readings[0];

  for(int i = 1; i < howMany; i++) {
  if(readings[i] < min) {
     min = readings[i];
    }
  }
  return min;
}

// BEGIN FINDING MAXIMUM

int maxRead(int readings[], int howMany) {
  int max = readings[0];

  for(int i = 1; i < howMany; i++) {
  if(readings[i] > max) {
     max = readings[i];
    }
  }
  return max;
}

// BEGIN FINDING RANGE

int rangeFinder(int min, int max) {
  int thisRange = max - min;
  return thisRange;
}


// BEGIN FINDING AVERAGE

int averageRead(int readings[], int howMany) {
  int avg = 0;
  int hold = 0;

  for(int i = 0; i < howMany; i++) {
    avg += readings[i];
  }
  hold = avg;
  avg = hold/howMany;

  return avg;
}

// BEGIN SUSPECT COUNT

float suspectCount(int readings[], int howMany, int avg, float decimalPercent) {
  int count = 0;
  float minimum = avg - (decimalPercent * avg)/100;
  float maximum = avg + (decimalPercent * avg)/100;

  for(int i = 0; i < howMany; i++) {
    if(readings[i] > maximum || readings[i] < minimum) {
      count++;
      }
    }
  return count;
}

// BEGIN MAIN

int main(void) {
  const int maxReading = 200;
  int readings[maxReading], howMany = 0, min = 0, max = 0, avg = 0, sus = 0, range = 0;
  float decimalPercent;

  scanf("%f", &decimalPercent);
  howMany = loadBulbs(readings, maxReading);

  printBulbs(readings, howMany);

  min = minRead(readings, howMany);
  max = maxRead(readings, howMany);
  avg = averageRead(readings, howMany);
  sus = suspectCount(readings, howMany, avg, decimalPercent);
  range = rangeFinder(min, max);

  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  printf("Range: %d\n", range);
  printf("Average: %d\n", avg);
  printf("Outside %.1f%%: %d\n", decimalPercent, sus);
  printf("========================================\n");
/* TESTING AREA

  printf("number of entries: %d\n", howMany);

  for(int i = 0; i < howMany; i++){
  printf("%d ", readings[i]);
} */

  return 0;
}
