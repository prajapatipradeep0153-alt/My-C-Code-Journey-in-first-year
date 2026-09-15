// Create an array of size 3 x 10 containing multiplication tables of the numbers 2, 7 and 9 respectively

#include <stdio.h>
int main()
{
    int table[3][10];
    int mul[] = {2, 7, 9};

    for (int i = 0; i < 3; i++) // ye row ke liye hai
    {
        for (int j = 0; j < 10; j++) // ye column ke liye hai
        {
            table[i][j] = mul[i] * (j + 1);
        }
        printf("\n");
    }



    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("the value of table[%d][%d] = %d\n", i, j, table[i][j]);
        }

        
    }

    return 0;
}
