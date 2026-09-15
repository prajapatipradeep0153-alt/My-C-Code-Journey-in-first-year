// passing structure to a function

#include <stdio.h>
#include <string.h>
struct employee     // agar mai yaha typedef struct employee likhu 
{

    char name[40];
    int id;
    int salary;
};                             //} emp;  bas likh du to

void show(struct employee e2);
void show(struct employee e2)
{

    printf("employee name is %s\n  employee id is %d\n  employee salary is %d\n", e2.name, e2.id, e2.salary);
}

int main()
{
    struct employee e1;      // agr mai eske jagah par emp e1; likhu to bhi kam chal jayega

    strcpy(e1.name, "pradeep");
    e1.id = 100;
    e1.salary = 9000;
show(e1);
    return 0;
}