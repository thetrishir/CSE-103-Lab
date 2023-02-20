#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fptr;
	char fname[20];
	char str;
	printf("Input the filename to be opened : ");
	scanf("%s",fname);
	fptr = fopen (fname, "r");
	str = fgetc(fptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(fptr);
		}
	fclose(fptr);
}
