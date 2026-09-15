// strcmp() function compares two strings and returns 0 
// if they are equal, a negative value if the first string is less than the second string, 
// and a positive value if the first string is greater than the second string. In this code,
// we are using strcmp() to compare the stored password with the entered password.
// If they match, we print "password matched", otherwise we print "password wrong! please try again".


#include <stdio.h>
#include <string.h>
int main()
{

    char storedpassword[] = "abc123";
    char enteredpassword[20];
    printf("enter your password:");
    scanf("%s", enteredpassword);
    int result = strcmp(storedpassword, enteredpassword);
    if (result == 0)
    {
        printf("password matched\n");
    }

    else
    {

        printf("password wrong! please try again\n");
    }

    return 0;
}