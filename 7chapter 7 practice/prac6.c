/*   Write a program containing functions which counts the number of positive integers in
an array    */
#include <stdio.h>

int count(int a[], int n)
{
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > 0)
        {

            no_of_positive++;
        }

        
    }
    return no_of_positive;
    }

int main()
{
    int arr[] = {11, 12 - 13, 14, -15, 16, 17, 18, -19, 20};
    int n = 10;

    printf("the positive number is %d\n", count(arr, n));

    return 0;
}