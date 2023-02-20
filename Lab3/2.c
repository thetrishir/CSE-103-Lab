#include<stdio.h>
int main()
{
    int s=0, n;
    printf("enter numbers: \n");
    scanf("%d",&n);
    while(n!=-1)
    {
        if(n%2==1)
            s+=n;
    scanf("%d",&n);
    }
    printf("Sum is: %d",s);
}
