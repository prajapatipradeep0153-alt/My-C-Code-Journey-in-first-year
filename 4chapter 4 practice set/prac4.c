#include <stdio.h>
int main()
{
    int sum=0;
    int i = 1;
    while (i <= 10)
    {

        sum += i;
        //sum=sum+i;
        i++;
   // printf("the sum of first natural number is %d\n", sum);

    }
    printf("the sum of first natural number is %d\n", sum);

    return 0;
}