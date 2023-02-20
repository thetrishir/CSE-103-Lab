#include<stdio.h>
main()
{
    int n,i,j,c=1;
    printf("Floyd's Triangle: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(c%2==0)
            printf("0");
            else
            printf("1");
            c++;
        }
        printf("\n");
    }
}

