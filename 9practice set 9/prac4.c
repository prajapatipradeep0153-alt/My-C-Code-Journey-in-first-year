// Write a program to illustrate the use of arrow operator in C.

#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    int rollNO;
} st;

int main()
{
    st s1;
    st *ptr = &s1; // ← Pointer to structure

    // ptr = &s1;                       // s1 ka address pointer mein daalna

    // (*ptr).rollno = 50;
    strcpy(ptr->name, "pradeep");
    ptr->rollNO = 100; // rollNo esme ek capital aur ek small e.g N & o aisa nahi chalega ya to

                           // dono capital me ho ya to small me kyoki ye case sensitive hota hai

    printf("name=%s\n rollno=%d\n ", ptr->name, ptr->rollNO);
    return 0;
}