// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to
// the third element where ptr is a pointer pointing to the first element of the array

#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr1 = arr + 2;

    printf("the value of arr[2]=%d\n", arr[2]);
    printf("ptr+2=%d\n", *ptr1);

    printf("the address of arr[2]=%p\n", &arr[2]);
    printf("the address of arr+2=%p\n", &(*ptr1));

    return 0;
}
