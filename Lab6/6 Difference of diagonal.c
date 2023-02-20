#include<stdio.h>
void main()
{
    int i,n,j,t,s1=0,s2=0,a[50][50];
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
                s1=s1+a[i][j];
    printf("%d",s1);
    for(i=0; i<n; i++)
    {
        j=n-1;
        s2=s2+a[i][j];
        j--;
    }
    printf("\n%d",s2);
    t=s2-s1;
    printf("\nThe difference of primary and secondary diagonal of the matrix %d\n",t);
}
