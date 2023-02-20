#include<stdio.h>
void main()
{
    int i,n[10],x,y;
    for(i=0; i<10; i++)
        scanf("%d",&n[i]);
    x=n[0];
    y=n[0];
    for(i=0; i<10; i++)
    {
        if(x<n[i])
           x=n[i];
    }
    printf("Highest %d",x);
    for(i=0; i<10; i++)
    {
        if(y>n[i])
            y=n[i];
    }
printf("\nSmallest %d",y);
}

