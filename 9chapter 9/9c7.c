// program of array of structure

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
    // 1st method

    struct employee info[100];

    strcpy(info[0].name, "pradeep bhai");

    info[0].id = 100;
    info[0].salary = 3000;

    strcpy(info[1].name, "ajay");

    info[1].id = 101;
    info[1].salary = 8000;

    for (int i = 0; i < 2; i++)
    {

        printf("name=%s\n  ID=%d\n salary=%d\n", info[i].name, info[i].id, info[i].salary);
    }

    /*
            // second method

    struct employee info[100]={

    {"pradeep",100,1000}, // comma lagana compulsory
    {"ajay",101,2000},
    {"ram",102,3000},
    {"ravi",103,4000},
    {"sita",104,5000}
        };             // semicolon lagana compulsory

    for(int i=0;i<5;i++){

    printf("name=%s\n  ID=%d\n salary=%d\n", info[i].name,info[i].id,info[i].salary);


    }

    */

    return 0;
}