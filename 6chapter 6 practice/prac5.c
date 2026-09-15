/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main() .*/

#include <stdio.h>

int sum_num(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

float sum_avg(int a, int b)
{
    float avarage;
    avarage = (a + b) / 2.0;

    return avarage;
}

int main()
{
    int x = 10;
    int y = 200;
    int sum = sum_num(x, y);
    float avarage = sum_avg(x, y);
    printf("sum=%d\n", sum);
    printf("avarage=%.2f\n", avarage);
    return 0;
}
