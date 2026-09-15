// Write a program to implement program 5 using for and do-while loop.
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {

        sum += i;
        // sum=sum+i;

        // printf("the sum of first natural number is %d\n", sum); har line me ye line likh ke aayega
    }
    printf("the sum of first natural number is %d\n", sum);

    return 0;
}