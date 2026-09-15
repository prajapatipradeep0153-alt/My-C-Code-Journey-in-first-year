// Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
//for encryption
/*

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "mai ek lakh rupay takiya me rakhae hai";
    for (int i = 0; i < strlen (str); i++)
    {

        str[i] = str[i] + 1;
    }
    printf("encrypted message=%s\n", str);
    return 0;
}

*/
//for decreyption


#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "nbj!fl!mbli!svqbz!ubljzb!nf!sblibf!ibj";
    for (int i = 0; i < strlen (str); i++)
    {

        str[i] = str[i] - 1;
    }
    printf("decrepted message=%s\n", str);
    return 0;
}