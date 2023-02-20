#include<stdio.h>
void main()
{
    int arr[50], i,a=0,first, second, third;
    scanf("%d",&arr[a]);
    while(arr[a]!=-1)
    {
        a++;
        scanf("%d",&arr[a]);
    }
    third = first = second = 0;
    for (i = 0; i <a; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }

        else if (arr[i] > third)
            third = arr[i];
    }

    printf("Three largest elements are %d %d %d\n", first, second, third);
}
