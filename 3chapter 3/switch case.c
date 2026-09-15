#include <stdio.h>
int main()
{
    int choice;
    printf("enter your choice number\n");
    scanf("%d" ,&choice);

    switch (choice)
    {
case 1:
printf("pizza\n");
break;
case 2:
printf("burger\n");
break;
case 3:
printf("pasta\n");
break;
case 4:
printf("samosa\n");
break;
default:
printf("invalid choice\n");

    }
   

    return 0;
}

