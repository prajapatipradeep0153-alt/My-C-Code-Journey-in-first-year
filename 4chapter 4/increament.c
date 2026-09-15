#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value of i is %d\n", i); // 5

    i = i + 5;

    printf("The value of i after increment is %d\n", i); // 10

    i++;

    printf("the value of i is %d\n", i);

    printf("the value of i is %d\n",i++);

    printf("the value of i is %d\n", ++i);
        return 0;
}


//i++ print i first and then increament(post increament operator
//++i increament first and then print(pre increament operator)