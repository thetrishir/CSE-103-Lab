#include<stdio.h>
int prime(int n,int i)
{
    if(i==1)
        return 1;
    else if(n %i==0)
        return 0;
    else
        prime(n,i-1);
}
int main()
{
    int n,flag;
    printf("Input any positive number : ");
    scanf("%d",&n);
    flag = prime(n,n/2);
    if(flag==1)
        printf("The number %d is a prime number. \n\n",n);
    else
        printf("The number %d is not a prime number. \n",n);
    return 0;
}
