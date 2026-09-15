// use of fprintf

#include <stdio.h>

int main() {
    FILE *fptr = fopen("output.txt", "w");
    
    if (fptr == NULL) {
        printf("File nahi bani!\n");
        return 1;
    }
    
    char name[] = "Arjun";
    int marks = 85;
    float cgpa = 8.5;
    
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Marks: %d\n", marks);
    fprintf(fptr, "CGPA: %.1f\n", cgpa);
    
    fclose(fptr);
    printf("✓ Formatted data likh di gayi!\n");
    
    return 0;
}