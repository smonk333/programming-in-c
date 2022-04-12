#include "defs.h"

void printArray(int size, food *arr1) {
printf("\nFOOD ITEM\t\tQUANTITY\tCALS\tPRO\tCARBS\tFAT");

for(int i = 0; i < size; i++) {
  printf("\n%d. %s", i + 1, (arr1 + i)->item);
  printf("\t\t%s", (arr1 + i)->quantity);
  printf("\t\t%d", (arr1 + i)->calories);
  printf("\t%.2f", (arr1 + i)->protein);
  printf("\t%.2f", (arr1 + i)->carbs);
  printf("\t%.2f\n", (arr1 + i)->fats);
  }

}
