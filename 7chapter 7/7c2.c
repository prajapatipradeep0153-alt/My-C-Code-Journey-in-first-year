#include <stdio.h>
int main()
{
    int marks[5];
   
printf("enter the marks of students");
scanf("%d\n", &marks[0]);
scanf("%d\n", &marks[1]);
scanf("%d\n", &marks[2]);
scanf("%d\n", &marks[3]);
scanf("%d\n", &marks[4]);




marks[0]=10;
marks[1]=30;
marks[4]=20;

printf("marks of 1st student=%d\n",marks[0]);
printf("marks of 2nd student=%d\n",marks[1]);
printf("marks of 4th student=%d\n",marks[4]);
    return 0;
}
