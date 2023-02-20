#include<stdio.h>
main()
{
    int i,s=0;
    printf("Numbers between 100 and 200, divisible by 9: ");
    for(i=108;i<=200;i+=9)
    {
        printf("%d ",i);
        s+=i;
    }
    printf("\nThe sum is %d",s);
}
