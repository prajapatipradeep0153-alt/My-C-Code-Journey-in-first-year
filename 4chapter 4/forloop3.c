#include <stdio.h>
int main()
{

    for (int i = 0; i <= 20; i++)
    {
        if (i == 11)
        {
            break;
        }
        printf("the value of i is %d\n", i);
    }

    return 0;
}
