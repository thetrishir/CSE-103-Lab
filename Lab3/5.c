#include<stdio.h>
int main()
{
    int i,j,k,rows;
    printf("Enter The Value of Rows: \n");
    scanf("%d",&rows);
    for(i=0; i<rows; i++)
    {
        for(k=0; k<i; k++)
        {
            printf(" ");
        }
        for(j=0;j<rows-i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
}
