#include <stdio.h>
int main()
{
   int sum=0;
    int n;
 
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        sum += i * n;
    // sum=sum+i*n;
       
    }
    printf("the sum of the multiplication is %d\n", sum);

    return 0;
}