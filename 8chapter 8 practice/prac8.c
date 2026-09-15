// Write a program to check whether a given character is present in a string or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'n'; // single letter ko single quato me hi rakhte hai
    int contains = 0;
    char name[] = "pradeep prajapati";
    for (int i = 0; i < strlen(name); i++)
    {

        if (name[i] == c)
        {

            contains = 1;
            break;// kyoki agar ek baar mil gaya bas hame pata chal gaya ki hai to ham apne program ko kyo badhaye
            
        }
    }
        if (contains)
        {

            printf("yes the given character contain\n");
        }

        else
        {

            printf("doesn't contain\n");
        }
    




return 0;
}