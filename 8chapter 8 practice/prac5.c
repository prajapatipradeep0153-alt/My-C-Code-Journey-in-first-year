// Write your own version of strcpy function from (string.h> .
// strcpy ke jaise ek function banao jo aisa ho kaam kare mystrlen
#include <stdio.h>
int mystrlen(char str[])
{

    int i = 0;
    int count = 0;
    char c = str[i];
    while (c != '\0')
    {

        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
    //  qprintf("%d\n", count);
}

void mystrcpy(char target[], char source[])
{

    for (int i = 0; i < mystrlen(source); i++)
    {

        target[i] = source[i];
    }

    target[mystrlen(source)] = '\0';
}

int main()
{
    int count;
    char source[] = "pradeep";
    char target[40];
    mystrcpy(target, source); // source me harry aa gaya lekin target abhi bhi khali hai
    printf("%s,%s", target, source);
    return 0;
}