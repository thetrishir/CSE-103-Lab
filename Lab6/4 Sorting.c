#include<stdio.h>
int main()
{
    int i,j,h,a[10]= {56,75,78,95,100,75,65,69,98,71};
    printf("The numbers of 10 students in Physics course: ");
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    for(j=0; j<10; j++)
        for(i=0; i<10; i++)
        {
            if(a[i]>a[i+1])
            {
                h=a[i];
                a[i]=a[i+1];
                a[i+1]=h;
            }
        }
    printf("\n\nLowest to highest: ");
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n\nHighest to lowest: ");
    for(i=9; i>=0; i--)
        printf("%d ",a[i]);
    return 0;
}
