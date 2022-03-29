//program to copy one file to another

#include<stdio.h>

int main(void)	{
	char inName[64], outName[64];
	FILE *in, *out;
	int c;

	//get file names from user

	printf("enter the name of file to be copied: ");
	scanf("%63s", inName);
	printf("enter name of output file: ");
	scanf("%63s", outName);

	//open input and output files

	if((in = fopen(inName, "r")) == NULL)	{
		printf("can't open %s for reading.\n", inName);
		return 1;
	}

	if((out = fopen(outName, "w")) == NULL)	{
		printf("can't open %s for writing.\n", outName);
		return 2;
	}

	//copy in to out

	while((c = getc(in)) != EOF)
		putc(c, out);

	//close open files

	fclose(in);
	fclose(out);

	printf("file has been copied.\n");

	return 0;
}