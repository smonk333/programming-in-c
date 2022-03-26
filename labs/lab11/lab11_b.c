#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_strcpy(char *dest, const char *src);

void my_strcpy(char *dest, const char *src)	{
	int i = 0;
	while(src[i] != '\0')	{
		dest[i] = src[i];
		i++;
	}
}

int main(void)	{
	char *str1, *str2;
	int i = 0;

	//	get desired size of array from user

	printf("What is the longest length of a string that you will enter? ");
	scanf("%i", &i);

	//	allocate memory for 2 arrays of size i+1 at runtime

	str1 = calloc(i + 1, sizeof(char));
	str2 = calloc(i + 1, sizeof(char));

	if (str1 == NULL && str2 == NULL)	{
		printf("calloc failed to allocate enough memory.\n");
		return 1;
	}

	printf("Enter a string: ");
	scanf("%s", str1);

	my_strcpy(str2, str1);

	printf("You entered: %s\n", str2);

	return 0;
}