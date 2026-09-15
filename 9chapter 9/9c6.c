// Write a program to store the details of 3 employees from user defined data. Use the structure declare above
#include <stdio.h>

struct employee
{

    char name[40];
    int id;
    int salary;
};

int main()
{
    struct employee e1, e2, e3;

    // for employee e1

    printf("for employee e1\n");

    printf("enter employee name\n");
    scanf("%s", &e1.name);

    printf("enter employee id\n");
    scanf("%d", &e1.id);

    printf("enter employee salary\n");
    scanf("%d", &e1.salary);

    printf("%s, %d, %d\n", e1.name, e1.id, e1.salary);
    // for employee 2

    printf("for employee e2\n");
    printf("enter employee name\n");
    scanf("%s", &e2.name);

    printf("enter employee id\n");
    scanf("%d", &e2.id);

    printf("enter employee salary\n");
    scanf("%d", &e2.salary);

    printf("%s, %d, %d\n", e2.name, e2.id, e2.salary);
    // for employee 3

    printf("for employee e3\n");
    printf("enter employee name\n");
    scanf("%s", &e3.name);

    printf("enter employee id\n");
    scanf("%d", &e3.id);

    printf("enter employee salary\n");
    scanf("%d", &e3.salary);

    printf("%s, %d, %d", e3.name, e3.id, e3.salary);

    return 0;
}