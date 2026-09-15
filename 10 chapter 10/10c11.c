//fputs

#include <stdio.h>

int main() {
    FILE *fptr = fopen("output.txt", "w");
    
    if (fptr == NULL) {
        printf("File nahi bani!\n");
        return 1;
    }
    
    fputs("Hello World!\n", fptr);
    fputs("This is line 2\n", fptr);
    
    fclose(fptr);
    printf("✓ Strings likh di gayi!\n");
    
    return 0;
}

/*    */