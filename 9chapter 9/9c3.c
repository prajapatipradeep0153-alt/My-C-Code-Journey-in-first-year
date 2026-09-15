#include <stdio.h>

struct student        // ye pure program me use hoga isliye isko main ke bahar define kiya hai
{
    int roll;
    char name[20];
    float marks;
};

int main()
{

    struct student students[5] = {       //

        {100, "pradeep", 85.5},
        {101, "suresh", 90.5},
        {102, "ramesh", 95.5},
        {103, "mahesh", 80.5},
        {104, "rajesh", 75.5}

    };
printf("STUDENTS DETAIL\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" roll=%d\n name=%s\n marks=%.1f\n", students[i].roll, students[i].name, students[i].marks);
    }


    return 0;
}
