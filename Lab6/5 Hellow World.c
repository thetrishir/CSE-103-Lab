#include<stdio.h>
int rec(int x)
{
    if(x>0)
        printf("%d Hello World\n",x);
    return rec(x-1);
}
void main()
{
    int n;
    printf("How many times do you want to print: ");
    scanf("%d",&n);
    rec(n);
}

