// Write a program to sum first ten natural numbers using while loop

#include <stdio.h>
int main()
{
  int sum;
    int i = 0;
    while (i <= 10)
    {

        printf("the sum of first natural number is\n");

        sum += i;
        i++;
    }

    return 0;
}