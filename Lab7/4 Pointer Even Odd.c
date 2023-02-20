#include<stdio.h>
int Hi_function(int *p)
{
    if(*p%2==0)
        printf("Even");
    else
        printf("Odd");
}
int main()
{
    int n=5;
    void (*function_ptr)(int);  /* function pointer Declaration */
  function_ptr = Hi_function;  /* pointer assignment */
  function_ptr (&n);  /* function call */
    //scanf("%d ",&n);
}
