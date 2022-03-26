#include<stdio.h>
#include<string.h>

void my_strcpy(char dest[], const char src[]);

void my_strcpy(char dest[], const char src[])	{
	for(int i = 0; i <= 31; i++)	{
		dest[i] = src[i];
	}
}

int main(void)	{
	char str1[31], str2[31];

	printf("Enter a string of length at most 30: ");
	fgets(str1, 31, stdin);

	str1[strlen(str1) - 1] = '\0';

	my_strcpy(str2, str1);

	printf("You entered: %s\n", str2);

	return 0;
}