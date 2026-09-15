// Write a program to read three integers from a file.
#include <stdio.h>
int main()
{
    FILE *ptr;

    ptr = fopen("pk1.txt", "r");
    int n1, n2, n3;
    fscanf(ptr, "%d %d %d", &n1, &n2, &n3);
    printf("the value of n %d %d %d\n", n1, n2, n3);
// same both
    /*
    fscanf(ptr, "%d", &n);
    printf("the value of n %d\n", n);

    fscanf(ptr, "%d", &n);
    printf("the value of n %d\n", n);

    */
    fclose(ptr);
    return 0;
}
