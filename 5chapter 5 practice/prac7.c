#include <stdio.h>
int main()
{
    int n = 3;

    for (int i = 0; n > i; i++)       // this print new line 
    {

        for (int j = 1; j <=2*i+1; j++)    // this print no. of star 2*i+1
        {

            printf("*");
        }
        printf("\n");

        
    }

    return 0;
}