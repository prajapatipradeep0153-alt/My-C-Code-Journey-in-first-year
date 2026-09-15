// Write a program to check whether a given number is prime or not using loops

#include <stdio.h>
int main()
{
    int n;
    int prime = 1;
    printf("enter the value of n");
        scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)// agar ye condition true ho jati hai to if ke andar jao.prime=0 ka matalab ki number prime nahi hai
        {

            prime = 0;
        }

    }
        if (prime == 1)
        {
            printf("the %d is  prime\n", n);
        }

        else
        {

            printf("the %d is not  prime\n", n);
        }
    
    return 0;
}
