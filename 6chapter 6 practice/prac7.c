
// Write a program to change the value of a variable to ten times its current value
// Try problem 3 using call by value and verify that it does not change the value of the variable.

#include <stdio.h>

void change_value(int x);
void change_value(int x)
{
    x = x + 10;
    printf("x=%d\n", x);
}

int main()
{

    int a = 10;
    change_value(a);
    printf("A=%d\n", a);
    return 0;
}
