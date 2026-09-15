
/*
#include <stdio.h>
int main()
{
    FILE *ptr; // file me jo information hai to ptr  uska address rakhata hai

    ptr = fopen("pradeep3.txt", "r");
    char c = fgetc(ptr); // used to read the character from file, file का पहला character p पढ़ेगा और c में रखेगा।
    printf("%c", c);
   fclose(ptr);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    FILE *ptr;

    ptr = fopen("pradeep3.txt", "w");

    fputc('a', ptr); // File me ek character 'a' write karta hai.

    fclose(ptr);
    return 0;
}
/*
fgetc  = file get character   → file से character लेना
fputc  = file put character   → file में character डालना*/