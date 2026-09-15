// Repeat problem 3 for a general input provided by the user using scanf

#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    int n;
    printf("enter number which table should be requred");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)

    {
        
        arr[i] = n * (i + 1);
        printf("the value of %d x %d = %d\n", n, (i + 1), arr[i]);
    }

    return 0;
}