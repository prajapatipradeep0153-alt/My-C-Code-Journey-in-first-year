//use of fgets



#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("pradeep6.txt", "r");
    if (fptr == NULL)
    {

        printf("file does not exist\n");
        return 1;
    }
    char ch[100];
    printf(" file content line by line\n");
    while (fgets(ch, sizeof ch,fptr) != NULL)
    {

        printf("%s", ch);
    }
fclose(fptr);
    return 0;
}

/*char line[100] — ek array jisme ek line (max 100 characters) store hogi
fgets(line, 100, fptr) — file se ek line padhta hai, line array mein daalta hai
100 = max characters jo padhega (buffer overflow se bachne ke liye)
Return NULL jab file khatam ho jaye
*/