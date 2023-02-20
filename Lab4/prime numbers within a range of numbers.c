#include<stdio.h>
main()
{
    int a,b,n,i,m=0;
    printf("Input starting number of range: ");
    scanf("%d",&a);
    printf("Input ending number of range : ");
    scanf("%d",&b);
    printf("The prime numbers between %d and %d are : \n",a,b);
    for(n=a; n<=b; n++)
    {
        for(i=2; i<n; i++)
            if(n%i==0)
                break;
        if(n==i)
        {
            printf("%d ",n);
            m++;
        }
    }
    printf("\nThere are %d prime numbers",m);
}

