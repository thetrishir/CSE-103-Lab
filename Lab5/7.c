#include<stdio.h>
void main()
{
    int arr[50],i,j,a=0,c=0;
    scanf("%d",&arr[a]);
    while(arr[a]!=-1)
    {
        a++;
        scanf("%d",&arr[a]);
    }
    for(i=0; i<a; i++)
    {
        for(j=i+1; j<a; j++)
            if(arr[i]==arr[j])
                {c++;
                arr[i]=0;
                }
        printf("%d %d",arr[i],c);
    }

}
