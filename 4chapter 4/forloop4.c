#include <stdio.h>
int main()
{

    for (int i = 0; i <= 20; i++)
    {
        if (i == 10)
        {
            continue;  // jo if ke andar condition hai ushe hi skip karega
        }
        printf("the value of i is %d\n", i);
    }

    return 0;
}
