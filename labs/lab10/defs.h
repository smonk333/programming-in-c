#ifndef defs
#define defs

typedef struct {
	char item[20];
	char quantity[10];
	int calories;
	float protein;
	float carbs;
	float fats;
} food;
void printArray(int firstLine, food foodIn[]);


#endif