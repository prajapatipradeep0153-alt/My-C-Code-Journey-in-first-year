#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("enter the value of n  %d x %d = %d\n", n, i, i * n);
    }

    return 0;
}