#include <stdio.h>
int main()
{
    int marks[90];
    marks[0] = 30;
    marks[30] = 40;
    marks[80] = 500;
    marks[89] = 600;
    printf("the marks at index 0 is %d\n", marks[0]);
    printf("the marks at index 030is %d\n", marks[30]);
    printf("the marks at index 80 is %d\n", marks[80]);
    printf("the marks at index 89 is %d\n", marks[89]);
    // printf("the marks at index 0 And 20 is %d,%d\n", marks[0], marks[1]);

    return 0;
}
