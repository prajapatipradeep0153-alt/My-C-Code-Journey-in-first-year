#include <stdio.h>
int main()
{
    float income;
    float tax;
    printf("enter the amount of income\n");
    scanf("%f",&income);

    if (income <= 250000)
    {
        printf("there is no need to pay the tax\n");
        tax = 0;
    }
    else if (income>250000 && income<= 500000)
    {
        printf("the amount of tax\n");
        tax = 0.05*income;
    }

    else if (income>500000 && income<= 1000000)
    {
        printf("the amount of tax\n");
        tax = 0.05*(500000 - 250000)+0.2*(income - 500000);
    }
    else if (income>1000000)
    {
        printf("the amount of tax\n");
        tax = 0.05*(500000 - 250000)+0.2*(1000000 - 500000)+0.3*(income - 1000000);
    }

    return 0;
}
