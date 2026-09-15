//use the library function to calculate the area of a square with side a
// math.h likhna jaruri hai kyoki ki pow(a,2) math.h ka library function hai



#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float area;
    printf("enter the value of side\n");
    scanf("%f", &a);

    area = pow(a, 2);
    printf("the are of square=%.2f\n", area);

    return 0;
}
