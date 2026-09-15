#include <stdio.h>
int main()
{
    int i = 66;
    int *p = &i;
    int k = 88;
    int *k1 = &k;
    printf("the address of i is %p\n", &i);
    printf("the address of i is %u\n", &i);
    printf("the address of i is %d\n", &i);
    printf("the value at address of p is %d \n", *(&i));

    printf("the address of k is %p\n", &k);
    printf("the address of k is %u\n", &k);
    printf("the address of k is %d\n", &k);
    printf("the value at address of k1 is %d \n", *(&k));
    return 0;
}
