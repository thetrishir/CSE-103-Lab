#include <stdio.h>
void main()
{
    int a[100], fr[100]={0},n=0, i, j, c;
    printf("element - %d : ",n);
    scanf("%d",&a[n]);
    while(a[n]!=-1)
    {
        n++;
        printf("element - %d : ",n);
        scanf("%d",&a[n]);
    }
    for(i=0; i<n; i++)
    {
        c = 1;
        for(j=i+1; j<n; j++)
            if(a[i]==a[j])
            {
                c++;
                fr[j] = -1;
            }
        if(fr[i]!=-1)
            fr[i] = c;
    }
    for(i=0; i<n; i++)
        if(fr[i]!=-1)
            printf("\n%d occurs %d times", a[i], fr[i]);
}
