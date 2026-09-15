#include <stdio.h>
int main()
{
    int temperature=5;
    if(temperature>=40)
    {
        printf("very hot\n");
    }
   else if(temperature>=30)
    {
        printf("normal\n");
    }
else if(temperature>=20)
    {
        printf("cool\n");
    }

    else if(temperature>=10)
    {
        printf("cold\n");
    }
    else if(temperature<=10)
    {

        printf("pala padat hai re\n");
    }

    return 0;
}

