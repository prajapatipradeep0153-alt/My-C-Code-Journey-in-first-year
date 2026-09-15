#include <stdio.h>

void change(int *x);
void change(int *x)
{

    *x = 100;
}

int main()
{
    int num = 50;
    change(&num);
    printf("x=%d\n", num);

    return 0;
}
