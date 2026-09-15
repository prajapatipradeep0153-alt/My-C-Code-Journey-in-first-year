// uses of fscanf

#include <stdio.h>

int main() {
    FILE *fptr = fopen("student.txt", "r");
    
    if (fptr == NULL) {
        printf("File nahi mili!\n");
        return 1;
    }
    
    char name[50];
    int marks;
    
    printf("Formatted Reading:\n");
    while (fscanf(fptr, "%s %d", name, &marks) != EOF) {
        printf("Name: %s, Marks: %d\n", name, marks);
    }
    
    fclose(fptr);
    return 0;
}