#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char item[20];
  char quantity[10];
  int calories;
  float protein;
  float carbs;
  float fats;
} food;

void printArray(int, food *);

#endif
