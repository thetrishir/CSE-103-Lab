#include<stdio.h>
int div(int x, int y)
{
    int i,c=0;
    for(i=x;i<=y;i++){
        if(i%5==0||i%7==0)
            c++;
    }
    return c;
}
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",div(a,b));
}
