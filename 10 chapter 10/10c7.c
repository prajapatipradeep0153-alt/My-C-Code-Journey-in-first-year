// use of fgetc

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
    char ch;
    printf(" file content char by char\n");
    while ((ch= fgetc(fptr)) != EOF)
    {

        printf("%c", ch);
    }
fclose(fptr);
    return 0;
}
/*

Line-by-Line Explanation:

fgetc(fptr) — ek character read karta hai file se
EOF (End Of File) — special value jo batata hai ki file khatam ho gayi
Loop tab tak chalega jab tak EOF nahi aata  */