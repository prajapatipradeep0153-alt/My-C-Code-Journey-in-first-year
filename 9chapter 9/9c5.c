// ptr जिस structure को point कर रहा है, उसका rollNo member 25 बनाओ।

#include <stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollNo;
    float cgpa;
};

int main()
{
    struct student s1;
    struct student *ptr = &s1;
    ptr->rollNo = 100;
    ptr->cgpa = 8.5;
    strcpy(ptr->name, "pradeep");

    printf("rollno=%d\n", ptr->rollNo);
    printf("CGPA=%.1f\n", ptr->cgpa);

    printf("name=%s\n", ptr->name);
    return 0;
}
/*
#include <stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int rollNo;
    float cgpa;
};

int main() {
    struct Student s1;
    struct Student *ptr = &s1;  // Pointer assign kiya
    
    // Arrow operator se assign
    ptr->rollNo = 25;
    ptr->cgpa = 8.5;
    strcpy(ptr->name, "Arjun");
    
    // Arrow operator se access
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->rollNo);
    printf("CGPA: %.1f\n", ptr->cgpa);
    
    // Alternative: dot operator with dereference
    printf("\nUsing (*ptr):\n");
    printf("Roll No: %d\n", (*ptr).rollNo);
    
    return 0;*/
