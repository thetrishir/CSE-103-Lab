#include<stdio.h>
int Hi_function(int *p)
{
    int f1=0,f2=1,f3,i;
    printf("%d %d",f1,f2);
    for(i=1;i<*p;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    printf(" %d",f3);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    void (*function_ptr)(int);  /* function pointer Declaration */
  function_ptr = Hi_function;  /* pointer assignment */
  function_ptr (&n);  /* function call */
}
