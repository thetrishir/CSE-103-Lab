#include<stdio.h>
main()
{
    int i,s=0;
    printf("Numbers between 100 and 200, divisible by 9: \n");
    for(i=100; i<=200; i++)
    {
        if(i%9==0)
        {
            printf("%d ",i);
            s+=i;
        }
    }
    printf("\nThe sum is %d",s);
}
