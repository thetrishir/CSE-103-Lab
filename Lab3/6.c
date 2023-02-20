#include<stdio.h>
int main()
{
    char n,l,r,u,d,x;
    int t=0;
    while(n!='x')
    {
        scanf("%c",&n);
        if(n=='l'||n=='L')
        {
            t+=10;
        }
        else if(n=='r'||n=='R')
        {
            t-=8;
        }
        else if(n=='u'||n=='U')
        {
            t-=3;
        }
        else if(n=='d'||n=='D')
        {
            t+=5;
        }
        printf("Total dollar is = %d$",t);
    }
}
