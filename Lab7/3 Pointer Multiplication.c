#include<stdio.h>
int ptr(int *p, int *q)
{
    return *p**q;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d ",ptr(&m,&n));
}

