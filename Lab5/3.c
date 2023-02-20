#include<stdio.h>
void main()
{
    int n[50],i,e,o;
    for(i=0; i<50; i++)
    {
        n[i]=1+(rand()%50);
        if(n[i]%2==0)
            e+=n[i];
        else
            o+=n[i];
    }
    if(e>o)
        printf("%d",e-o);
    else
        printf("%d",o-e);
}


