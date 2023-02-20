#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char sentence[] = "hello dear earth";
    char str[20];

    int i,j = 0;
    printf("The characters of the string in reverse are : ");
    for(i=0; sentence[i]!='\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            str[j] = sentence[i];
            j++;
        }
        else
        {
            str[j] = '\0';
            printf("%s", strrev(str));
            printf(" ");
            j = 0;
        }
    }
    str[j] = '\0';
    printf("%s\n\n", strrev(str));
    return 0;
}
