#include<stdio.h>
void main()
{
    int a,b,n;
    printf( "Enter seed: " );
    scanf("%d",&n);
    /*int a,b;
    unsigned n;
    printf( "Enter seed: " );
    scanf("%u",&n);
    srand(n);*/
    a=1+(rand()%6);
    b=1+(rand()%6);
    printf("%d %d\n",a,b);
    if(n==a&&n==b)
        printf("WON");
    else
        printf("LOSE");
}

