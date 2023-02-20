#include<stdio.h>
void main()
{
    int a;
    FILE *ptr=fopen("Info.txt","a");
    scanf("%d",&a);
    while(a!=-1)
    {
        fprintf(ptr,"%d ",a);
        scanf("%d",&a);
    }
    fclose(ptr);
}
