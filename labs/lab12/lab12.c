#include "defs.h"

int main(int argc, char *argv[]) {
  FILE *inFile;
  int size, i = 0;
  food *arr1;
  char getSize[1];

  if(argc > 2){
    printf("Too many arguments supplied, exiting.\n");
    exit(1);
  }

  inFile = fopen(argv[1], "r");

  if (inFile == NULL) {
    fprintf(stderr, "File open error. Exiting program\n");
    exit(1);
  }

  fscanf(inFile, "%c", getSize);
  size = atoi(getSize);

  arr1 = (food *)malloc(size * sizeof(food));

  for(i = 0; i < size; i++) {
    fscanf(inFile, "%s", (arr1 + i)->item);
    fscanf(inFile, "%s", (arr1 + i)->quantity);
    fscanf(inFile, "%d", &(arr1 + i)->calories);
    fscanf(inFile, "%f", &(arr1 + i)->protein);
    fscanf(inFile, "%f", &(arr1 + i)->carbs);
    fscanf(inFile, "%f", &(arr1 + i)->fats);
  }

  printArray(size, arr1);
  fclose(inFile);
  free(arr1);

  return 0;
}
