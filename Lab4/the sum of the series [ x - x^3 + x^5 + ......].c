#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,j=1,p,s=0,c=1;
    printf("Input the value of x: ");
    scanf("%d",&x);
    printf("Input number of terms: ");
    scanf("%d",&n);
    printf("The values of the series: \n");
    for(i=1;i<=n;i++)
    {
        p=pow(x,j);
        if(c%2==0)
        p=p*-1;
        printf("%d\n",p);
        s+=p;
        c++;
        j+=2;
    }
    printf("The sum = %d",s);
    return(0);
}
