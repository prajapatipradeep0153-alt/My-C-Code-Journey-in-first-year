
// Write a program to change the value of a variable to ten times its current value
// Try problem 3 using call by value and verify that it does not change the value of the variable.


// methode 1

/*#include <stdio.h>
int sum(int a, int b);
int sum(int a, int b)
{
    int total_sum;   
    total_sum = a + b;

    return total_sum;
}

int main()
{
    
    
    printf(" the sum is %d\n" , sum(5,5));

    return 0;
}*/

//method 2


#include <stdio.h>
int sum(int a, int b);
int sum(int a, int b)
{
    int total_sum;   // variable 1 
    total_sum = a + b;

    return total_sum;
}

int main()
{
    int total_sum;   // variable 2
    total_sum=sum(5,5);
    
    printf(" the sum is %d\n" , total_sum);

    return 0;
}
