// Write a program to implement program 5 using for and do-while loop.
#include <stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    do
    {
        sum += i;

        i++;
    } while (i <= 10);
    printf("the sum of first natural number is %d\n", sum);
    return 0;
}