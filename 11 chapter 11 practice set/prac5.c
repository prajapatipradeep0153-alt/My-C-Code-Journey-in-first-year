//Create an array of multiplication table of 7 up to 10 (7 x 10 = 70). IJse realloc SO that
//it can store the multiplication table up to 15 (7 x 15 = 105).

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *ptr;
    ptr = calloc(n , sizeof(int));
    printf("1sr array is\n");
    for (int i = 0; i < n; i++)
  
    {

        ptr[i]=7*(i+1);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d\n", ptr[i]);
    }

    n = 15; // jab dubara integer badhayenge to int n=10; int nahi likhenge
    ptr = realloc(ptr, n * sizeof(int));

    
    for (int i = 0; i < n; i++)
    {

        ptr[i]=7*(i+1);
    }
printf("the array is\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}
