// Repeat problem 7 for a custom input given by the user

#include <stdio.h>
int main()
{
    int n1, n2, n3;

    int table[3][10];

    printf("enter the values for the multiplication tables: ");
    scanf("%d %d %d", &n1, &n2, &n3);  // scanf ko int mul ke pahle likhenge kyoki jan user value enter karega to n1 n2 n3 
                                        // me store ho jayega
    int mul[] = {n1, n2, n3};
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
