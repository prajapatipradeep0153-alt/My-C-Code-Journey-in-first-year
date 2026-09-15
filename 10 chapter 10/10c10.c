//use of fputc

#include <stdio.h>

int main() {
    FILE *fptr = fopen("output.txt", "w");
    
    if (fptr == NULL) {
        printf("File create nahi ho payi!\n");
        return 1;
    }
    
    char text[] = "Hello";
    
    for (int i = 0; text[i] != '\0'; i++) {
        fputc(text[i], fptr);  // Ek-ek character likh raha hai
    }
    
    fclose(fptr);
    printf("✓ File likh di gayi!\n");
    
    return 0;
}

/*text[i] != '\0' — string ke end tak loop chalega (null terminator tak)
fputc(text[i], fptr) — ek character file mein likhta hai*/
