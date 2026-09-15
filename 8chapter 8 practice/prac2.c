// Write a program to take string as an input from the user using Xc and Xs and
// confirm that the strings are equal.
/*#include <stdio.h>
int main()
{
    char st[50];
    printf("enter the string: ");
    scanf("%s", st);
    for (int i = 0; i < 7; i++)
    {

        printf("string=%c\n", st[i]);
    }
    printf("string=%c\n", st[0]);
    printf("string=%s\n", st);
    return 0;
}*/

#include <stdio.h>
int main()
{
    char st[8];
    printf("enter the string: ");
    
    for (int i = 0; i < 7; i++)
    {
        scanf("%s", &st[i]);
        fflush(stdin);
    }
    st[7] = '\0';
    printf("string=%s\n", st);

    return 0;
}