#include<stdio.h>
int ptr(int *p)
{
    int d=*p,i=0,j,a[10];
    while(d>0)
    {
        a[i]=d%8;
        d=d/8;
        i++;
    }
    printf("Binary of %d is : ",*p);
    for(j=i-1; j>=0; j--)
        printf("%d",a[j]);
}
int main()
{
    int n=14;
    //scanf("%d ",&n);
    ptr(&n);
}
