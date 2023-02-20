#include<stdio.h>
int main()
{
    int x,y,x1,x2,y1,y2;
    float distance;
    printf("Enter a x1: \n");
    scanf("%d",&x1);
    printf("Enter a x2: \n");
    scanf("%d",&x2);
    printf("Enter a y1: \n");
    scanf("%d",&y1);
    printf("Enter a y2: \n");
    scanf("%d",&y2);
    x=x2-x1;
    y=y2-y1;
    distance=sqrt((x*x)+(y*y));
    printf("distance :%.2f\n",distance);
    if(distance<=10)
        printf("Near");
    else printf("Far");

}
