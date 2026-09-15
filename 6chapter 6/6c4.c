#include <stdio.h>

int main()
{

    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    printf("the address of x is %p\n", &x);
    printf("the address of ptr1 is %p\n", &ptr1);
    printf("the address of ptr2 is %p\n", &ptr2);
    printf("the value  of ptr1 is %d\n", *ptr1);
    printf("the value  of ptr2 is %d\n", **ptr2);

    return 0;
}
