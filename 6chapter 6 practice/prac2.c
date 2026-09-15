/*Write a program having a variable i . print the address of i . pass this variable to a
function and print its address. Are these addresses the same? Why?*/

#include <stdio.h>
int pass_address(int *ptr)

{

    printf("the address of ptr is %p\n", ptr);
    printf("the value at ptr is %d\n", *ptr);
}

int main()
{
    int i = 5;
    int *ptr = &i;

    printf("the address of i is %p\n", &i);
    pass_address(ptr); // ptr me i ka address hai aur *ptr me i ki value 5 hai
    return 0;
}

/*            int pass_address(int *ptr)

int *ptr naam ka ek pointer variable maana jisme i ka address store  *ptr= me  i ki value store hai
 aur  ptr me i ka address                  */