// Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char c= 'a';  //single letter ko single quato me hi rakhte hai
    int count = 0;
    char name[] = "pradeep prajapati";
    for (int i = 0; i < strlen(name); i++)
    {

        if (name[i]==c)
        {

            count++;
        }
    }

    printf("count=%d", count);
    return 0;
}