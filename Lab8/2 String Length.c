#include <stdio.h>
int length(char a[])
{
    int i=0;
    while(a[i]!='\0')
        i++;
    return i;
}
int main()
{
    char s[1000];
    int i;
    printf("Enter a string: ");
    scanf("%s", s);
    printf("Length of string: %d", length(s));
    return 0;
}
