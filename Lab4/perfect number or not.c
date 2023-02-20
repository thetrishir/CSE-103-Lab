#include<stdio.h>
int main()
{
    int n,i,p,s=0;
    printf("Input the number : ");
    scanf("%d",&n);
    printf("The positive divisor : ");
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            p=n/i;
            printf("%d ",p);
            s+=p;
        }
    }
    printf("\nThe sum of the divisor is : %d\n",s-n);
    if(n==s-n)
        printf("So, the number is perfect");
    else
        printf("So, the number is not perfect");
    return 0;
}
