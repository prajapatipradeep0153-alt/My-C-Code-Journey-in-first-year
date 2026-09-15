
#include <stdio.h>
#include <string.h>
int main()
{
    struct student
    {
        int roll;
        char name[20];
        float marks;
    };
    //struct student s1 = {101, "pradeep", 85.5};

struct student s1;
    s1.roll=101;
    strcpy(s1.name,"pradeep");
    s1.marks=85.5;


    printf("Roll:%d\n Name:%s\n Marks:%.1f\n",
           s1.roll, s1.name, s1.marks);
    return 0;
}