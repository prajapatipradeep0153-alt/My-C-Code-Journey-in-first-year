//Attempt problem 4 using calloc() 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = malloc(n * sizeof(int));
    printf("1sr array is\n");
    for (int i = 0; i < n; i++)
  
    {

        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d\n", ptr[i]);
    }

    n = 10; // jab dubara integer badhayenge to int n=10; int nahi likhenge
    ptr = realloc(ptr, n * sizeof(int));

    
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &ptr[i]);
    }
printf("the array is\n");
    for (int i = 0; i < 10; i++)
    {

        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}
