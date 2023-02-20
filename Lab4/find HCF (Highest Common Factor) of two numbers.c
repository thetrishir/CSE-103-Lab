#include<stdio.h>
main()
{
    int n1,n2,i,hcf,j;
    printf("Input 1st number for HCF: ");
    scanf("%d",&n1);
    printf("Input 2nd number for HCF: ");
    scanf("%d",&n2);
    j=(n1<n2)?n1:n2;
    for(i=1; i<=j; i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            printf("%d ",i);
            hcf=i;
        }
    }
    printf("\nHCF of %d and %d is : %d\n\n", n1, n2, hcf);
}
