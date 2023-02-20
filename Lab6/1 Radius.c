#include<stdio.h>
float rad(int x)
{
    float a;
    a=x*2*3.1416;
    return a;
}
int par(float x)
{
    if(x>25)
        printf("Greater than 25");
    else
        printf("Less than 25");
}
void main()
{
    int r;
    float a;
    printf("Enter The Radius: ");
    scanf("%d",&r);
    a=rad(r);
    printf("Area of the circle is %4f\n",a);
    par(a);
}
