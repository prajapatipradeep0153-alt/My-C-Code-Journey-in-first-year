// Write a function and pass the value by reference
#include <stdio.h>
int sum(int *, int *);
int sum(int *a, int *b)
{
    int total;
    *a=100; *b=100;
     total = *a + *b;
    return total;
}

int main()
{
    int x = 10;
    int y = 20;
   int total= sum(&x, &y);
    printf("total sum=%d\n",total);

    return 0;
}
