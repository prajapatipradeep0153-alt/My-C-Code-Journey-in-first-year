/*Write a program to print the address of a variable. Use this address to get the value of
the variable*/





#include <stdio.h>
int main()
{
    int a=10;
   int *p=&a;


   
printf("the address of variable a is %p\n", &a);
printf("the value at address a is %d\n", *(&a));

printf("the value at address a is %d\n", *p);
    return 0;
}

