#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,a[50],n,c;
    printf("Array value: ");
    for(i=0; i<50; i++)
    {
        a[i]=1+rand()%50;
        printf("%d ",a[i]);
    }
    printf("\n\nInput search value (-1 to exit): ");
    scanf("%d",&n);
    while(n!=-1)
    {
        c=1;
        for(i=0; i<50; i++)
        {
            if(a[i]==n)
            {
                printf("%d is present in array in a[%d]\n",n,i);
                c=0;
            }
        }
        if(c==1)
            printf("\n%d is not present in array",n);
    printf("\nInput search value (-1 to exit): ");
        scanf("%d",&n);
    }
}
