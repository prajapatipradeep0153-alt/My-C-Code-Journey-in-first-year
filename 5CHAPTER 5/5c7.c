#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {

        return 1;
    }

    return factorial(n - 1) * n;
}

int main()
{

    int result = factorial(6);
    printf("%d\n", result);
    return 0;
}