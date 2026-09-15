// Write a program containing a function which reverses the array passed to it
#include <stdio.h>
void reversearray(int *ptr, int n);
void reversearray(int *ptr, int n)
{
    int *ptr1 = ptr + 4;
    printf("\n");

    printf("%d", *ptr1);

    int *ptr2 = ptr + 4;
    printf("%d", *ptr2 - 10);

    int *ptr3 = ptr + 4;
    printf("%d", *ptr3 - 20);

    int *ptr4 = ptr + 4;
    printf("%d", *ptr4 - 30);

    int *ptr5 = ptr + 4;
    printf("%d", *ptr5 - 40);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i;
    for (i = 0; i < 5; i++)
    {

        printf("%d", arr[i]);
    }

    reversearray(arr, n);

    return 0;
}