//write program of factorial
#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("enter the value of n\n");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {

        fact = fact * i;
        i++;
    }
    printf("the factorial is %d\n", fact);
    return 0;
}
