#include<stdio.h>
int main()
{
    int s=0, n=1;
    while(n<=10)
    {
        if(n!=3&&n!=6)
            s+=n;
        n++;
    }
        printf("%d",s);
}

