// sum of n natural number using recursive

#include <stdio.h>

int natural_number(int n);

int natural_number(int n)
{

    if (n == 1)
    {

        return 1;
    }

    int result = n + natural_number(n - 1);
    return result;
}
int main()
{
    int result = natural_number(10);
    printf("sum of natural number=%d\n", result);

    return 0;
}



/* Sabse important baat
n - 1 khud n ki value ko change nahi kar raha.
Ye bas next function call ko ek chhoti value de raha hai.
Example:
natural_number(5)
ke andar:
natural_number(n - 1)
becomes:
natural_number(5 - 1)
becomes:
natural_number(4)
Phir us naye function call mein n ki value 4 hai.
Isliye:
natural_number(4 - 1)
→ natural_number(3)*/