#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int i,wrd=1;
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
    for(i=0;str[i]!='\0';i++)
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
            wrd++;
    printf("Total number of words in the string is : %d\n", wrd-1);
}

