// program of pointer to structer

#include <stdio.h>  
#include <string.h>
struct employee
{

    char name[40];
    int id;
    int salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr = &e1;
    strcpy(e1.name, "pradeep");
    e1.id = 100;
    e1.salary = 9000;

    printf("%s\n", (*ptr).name); //* (eske andar lagega hamesha)
    printf("%d\n", (*ptr).id);
    printf("%d\n", (*ptr).salary);

    // same (*ptr)=ptr-> ye dono same kaam karte hai

    printf("%s\n", ptr->name); //* (eske andar lagega hamesha)
    printf("%d\n", ptr->id);
    printf("%d\n", ptr->salary);

    return 0;
}