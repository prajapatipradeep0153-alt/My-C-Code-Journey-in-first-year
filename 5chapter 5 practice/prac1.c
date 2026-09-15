
// avarage three number



#include <stdio.h>
float n = 3;


float avarage(int a, int b, int c)
{
    float sum = a + b + c ;
float result=sum/n;
    return result;
}
int main()
{

    float result = avarage(5, 10, 6);
   

    printf("avarage=%f\n", result);
    return 0;
}


/*main()
   ↓
average(5, 10, 6)
   ↓
a = 5, b = 10, c = 6
   ↓
sum = 5 + 10 + 6
   ↓
sum = 21
   ↓
result = 21 / 3
   ↓
result = 7
   ↓
return 7
   ↓
main mein result = 7
   ↓
printf → 7.00 */