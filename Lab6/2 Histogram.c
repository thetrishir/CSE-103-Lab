#include <stdio.h>
void main()
{
    int i, j,max=0,a[5]= {7,4,5,2,3};
    for(i=0; i<5; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=max; i>0; i--)
    {
        for(j=0; j<5; j++)
        {
            if(a[j]>=i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}
