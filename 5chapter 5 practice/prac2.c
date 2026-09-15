//Write a function to convert Celsius temperature into Fahrenheit.





#include <stdio.h>
float temperature(float n);
float temperature(float n)
{

    float fahrenheit = (n * 9 / 5) + 32;
    return fahrenheit;
}

int main()
{
    float fahrenheit = temperature(12);
    printf("fahrenheit=%.2f\n", fahrenheit);

    return 0;
}
