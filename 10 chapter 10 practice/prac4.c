// Write a program to modify a file containing an integer to double its value

#include <stdio.h>
int main()
{

    FILE *ptr;
    ptr = fopen("pk4.txt", "r");
    int num1;
    fscanf(ptr, "%d", &num1);

    fclose(ptr);
     ptr = fopen("pk4.txt", "w");

fprintf(ptr ,"%d" , 2*num1);

    return 0;
}
