// Write a program to create an array of 1O integers and store multiplication table of 5 in it.

#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 10; i++)
    {

        arr[i] = 5 * (i + 1);

        printf("the value of 5 x %d = %d\n",(i+1), arr[i]);
    }

    return 0;
}