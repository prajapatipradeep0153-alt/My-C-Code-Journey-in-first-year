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



//struct Student student1;
/*
Memory Address    |    Data
_________________|________________
1000              |    [s] (name[0])
1001              |    [t] (name[1])
1002              |    [u] (name[2])
...
1049              |    [?] (name[49])
__________________|________________
1050              |    25 (rollNo)  ← int = 4 bytes
1051              |    00           (part of int)
1052              |    00           (part of int)
1053              |    00           (part of int)
__________________|________________
1054              |    8 (cgpa)     ← float = 4 bytes
1055              |    ?
1056              |    ?
1057              |    ?
__________________|________________
1058              |    19 (age)     ← int = 4 bytes
1059              |    00
1060              |    00
1061              |    00

*/