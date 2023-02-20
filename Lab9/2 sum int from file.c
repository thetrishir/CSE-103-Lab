#include<stdio.h>
void main()
{
    int i,x,sum=0;
    char a;
    FILE *ptr;//=fopen("Input.txt","a");
    /*for(i=0;i<5;i++)
    scanf("%s",&a);
    fprintf(ptr,"%s",a);

    scanf("%s",&a);
    while(a!="\n")
    {
        fprintf(ptr,"%d ",a);
        scanf("%d",&a);
    }

    rewind(ptr);*/
    ptr=fopen("Input.txt","r");
    while(!feof(ptr))
    {
        fscanf(ptr,"%d",&x);
        printf("x%d ",x);
        sum+=x;
    }
    printf("Sum=%d",sum);
    fclose(ptr);
}
