#include<stdio.h>
#define M 5
#define N 4
int sum(int a[], int b[])
{
    int i,s1=0,s2=0;
    for(i=0; i<M; i++)
        s1+=a[i];
    for(i=0; i<N; i++)
        s2+=b[i];
    printf("%d-%d=%d",s1,s2,s1-s2);
}
int main()
{
    int x[M]= {1,2,3,4,5},y[N]= {1,2,3,4};
    /*for(i=0;i>n;i++)
        printf("%d",a[j]);
    scanf("%d ",&n);*/
    sum(x,y);
}
