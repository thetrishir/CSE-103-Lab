#include<stdio.h>
void ptr(int *p)
{
    *p=*p+1;
}
int main()
{
    int n=7;
    ptr(&n);
    printf("%d ",n);
}
