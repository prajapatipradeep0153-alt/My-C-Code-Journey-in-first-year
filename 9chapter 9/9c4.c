
#include<stdio.h>


struct Student {
    char name[50];
    int rollNo;
};

int main() {
    struct Student s1;
    struct Student *ptr=&s1;  // ← Pointer to structure
    
   // ptr = &s1;  // s1 ka address pointer mein daalna
    
    printf("%p", ptr);
    return 0;
}