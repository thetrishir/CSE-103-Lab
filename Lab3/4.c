#include<stdio.h>
int main()
{
    int n=0,f=1,i;
    printf("Enter a num: \n");
    scanf("%d",&n);
    while(n!=-1)
    {
        for(i=1; i<=n; i++)
            {f=f*i;}
             printf("Factorial is=%d\n",f);
             f=1;
             scanf("%d",&n);
    }

}
