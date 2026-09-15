#include <stdio.h>
int main()
{
    char i = 'a';
    char *p = &i;
    float k = 2.314;
    float *k1 = &k;
    printf("the address of i is %p\n", &i);
    printf("the address of i is %u\n", &i);

    printf("the value at address of p is %c \n", *(&i));

    printf("the address of k is %p\n", &k);
    printf("the address of k is %u\n", &k);
    printf("the address of k is %f\n", &k);
    printf("the value at address of k1 is %f\n", *(&k));
    return 0;
}

/*
a = 10

&a
 ↓
a ka address

p = &a
 ↓
p mein a ka address

*p
 ↓
a ke address par stored value
 ↓
10
 */