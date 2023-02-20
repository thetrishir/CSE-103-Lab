#include<stdio.h>
void ptr(int a[])
{
    int temp,*p,i,j;
    for(j=0; j<5; j++)
        for(i=0; i<5-1; i++)
        {
            p=&a[i];
            if(*p<*(p+1))
            {
                temp=*p;
                *p=*(p+1);
                *(p+1)=temp;
            }
        }
}
int main()
{
    int a[5]= {5,2,4,3,3},i;
    /*for(i=0; i<5; i++)
        scanf("%d",&a[i]);*/
    for(i=0; i<5; i++)
        printf("%d ",a[i]);
    printf("\n");
    ptr(a);
    for(i=0; i<5; i++)
        printf("%d ",a[i]);
}
