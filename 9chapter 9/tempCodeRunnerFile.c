#include <stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[20];
        float marks;
    };
    struct student s1 = {101, "pradeep", 85.5};
    printf("Roll: %d\n Name: %s\n Marks: %.1f\n",
           s1.roll, s1.name, s1.marks);
    return 0;
}