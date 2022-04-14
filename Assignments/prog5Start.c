/*
Program:     prog5
Description: Process and gather statistics on bulb readings
Author:      Garrett Boling
Date:        4/14/22
*/

#include <stdio.h>
#include <stdlib.h>

   // prototypes
   int loadBulbs(int *lum, int max);
   void printBulbs(int *lum, int n);
   int minReading(int *lum, int n);
   int maxReading(int *lum, int n);
   int averageReading(int *lum, int n);
   int suspectCount(int *lum, int n, int average, float pct);
   void printEquals();

int main(int argc, char *argv[]) {
   // constants
   const int MAX_READINGS = 200;

   // variables
   int readings[MAX_READINGS];
   int num_readings;
   int min, max, avg, suspect;
   float pct;

   // pointers
  int *readPtr = &readings[0];
  FILE *input;

  // confirm if args are viable
  if(argc > 2){
    printf("Too many arguments supplied, exiting.\n");
    exit(1);
  }

  // open file if it passes the initial check, then check to see if the file exists
  input = fopen(argv[1], "r");

  if(input == NULL) {
    fprintf(stderr, "File open error, exiting program\n");
    exit(1);
  }
   // read percentage and readings and print readings
   scanf("%f", &pct);
   num_readings = loadBulbs(readPtr, MAX_READINGS);
   printBulbs(readings, num_readings);

   // gather statistics
   min = minReading(readings, num_readings);
   max = maxReading(readings, num_readings);
   avg = averageReading(readings, num_readings);
   suspect = suspectCount(readings, num_readings, avg, pct);

   // print statistics
   printEquals();
   printf("Statistics\n");
   printEquals();
   printf("Minimum: %d\n", min);
   printf("Maximum: %d\n", max);
   printf("Range: %d\n", max-min);
   printf("Average: %d\n", avg);
   printf("Outside %.1f%%: %d = %.1f%%\n",
         pct, suspect, (suspect * 100.0) / num_readings);
   printEquals();

   return 0;
}

int loadBulbs(int *lum, int max) {
/*    Read bulb readings and place in array
      Exit if too many readings for array
      Parameters: lum - readings arrray
                  max - maximum elements in array
      Return:     Number of readings placed in array
*/
   int i = 0, reading;

   // While able to read a reading
   while (scanf("%d", &reading) == 1) {
      if (i >= max) {         // see if it will fit
         printf("\nMore than %d readings!\n\n", max);
         exit(1);
      }
      *(lum + i) = reading;      // place in array
      i++;
   }
   return i;                 // return count
}

void printBulbs(int *lum, int n) {
/*    Print bulb readings 10 per line preceed by headings
      Parameters: lum - readings array
                  n - number of elements in arrray
*/
   int i;

   // print headings
   printEquals();
   printf("%d Readings\n", n);
   printEquals();

   // print readings
   for (i = 0; i < n; i++) {
      if (i % 10 == 0 && i != 0)
         printf("\n");
      printf("%3d ", *(lum + i));
   }
   printf("\n");
}

int minReading(int *lum, int n) {
/*    Determine minimum reading
      Parameters: lum - readings array
                  n - number of elements in arrray
      Return:     Minimum reading
*/
   int i, min;

   min = *lum;
   for (i = 1; i < n; i++)
      if (*(lum + i) < min)
         min = *(lum + i);
   return min;
}

int maxReading(int *lum, int n) {
/*    Determine maximum reading
      Parameters: lum - readings array
                  n - number of elements in arrray
      Return:     Maximum reading
*/
   int i, max;

   max = *lum;
   for (i = 1; i < n; i++)
      if (*(lum + i) > max)
         max = *(lum + i);
   return max;
}

int averageReading(int *lum, int n) {
/*    Determine average reading
      Parameters: lum - readings array
                  n - number of elements in arrray
      Return:     Average reading
*/
   int i, total = 0, avg = 0;

   for (i = 0; i < n; i++)
      total += *(lum + i);
   avg = total / n;
   return avg;
}

int suspectCount(int *lum, int n, int average, float pct) {
/*    Determine count of readings outside range
      Parameters: lum - readings array
                  n - number of elements in arrray
                  average - average reading
                  pct - percentage
      Return:     Minimum reading
*/
   int i, count = 0;
   float radius, lower, upper;

   // calculate limits of range
   radius = average * (pct / 100.0);
   lower = average - radius;
   upper = average + radius;

   // count readings outside range
   for (i = 0; i < n; i++)
      if (*(lum + i) < lower || *(lum + i) > upper)
         count++;

   return count;
}

void printEquals() {
/*    Print line of 40 ='s
*/
   int i;

   for (i = 0; i < 40; i++)
      printf("=");
   printf("\n");
}
