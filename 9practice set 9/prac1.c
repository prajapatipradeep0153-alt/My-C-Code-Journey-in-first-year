// Create a two-dimensional vector using structures in C

#include <stdio.h>
struct vector
{
    int i;
    int j;

};            // semicolon lagana compulsory hai


int main()
{
    struct vector v = {4, 5};
    printf("the value of vector=%di + %dj\n", v.i, v.j);
    return 0;
}