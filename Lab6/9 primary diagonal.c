#include<stdio.h>
void main()
{
    int i,n,j,t,s=0,a[50][50];
    printf("Input the size of the square matrix: ");
    scanf("%d",&n);
    printf("Input elements in the first matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n ; j++)
            printf("% 4d",a[i][j]);
        printf("\n");
    }
    for(j=0; j<n; j++)
        for(i=0; i<n; i++)
            if(i==j)
                s+=a[i][j];

    printf("\nThe difference of primary and secondary diagonal of the matrix %d\n",s);
}

