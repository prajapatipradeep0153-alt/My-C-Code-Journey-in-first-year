/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take rn and n as the start and ending position for   //not clear program
slice*/

#include <stdio.h>
char *slice(char str[], int m, int n)
{

    int i = 0;
    char *ptr1 = &str[m]; // ptr1 me r ka address store
    char *ptr2 = &str[n];// ptr2 me e ka address store
    str = ptr1;
    str[n] = '\0';

    return str;
}

int main()
{
    char str[] = "pradeep";
    printf("%s", slice(str, 1, 5));

    return 0;
}
/*
Original string: "pradeep"
Index:  0 1 2 3 4 5 6 7
Value:  p r a d e e p \0



m = 1  → जहाँ से slice शुरू करना है
n = 5  → जहाँ slice खत्म होना है
Index 1 → r
Index 2 → a
Index 3 → d
Index 4 → e

Answer: "rade"
ptr1 अब 'r' को point कर रहा है।

 Index:  0 1 2 3 4 5 6 7
   Value:  p r a d e e p \0*/

