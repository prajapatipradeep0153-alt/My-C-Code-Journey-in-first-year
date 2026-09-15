/*strcat() function is used to concatenate two strings. It appends the source string
 to the destination string and returns a pointer to the destination string.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char first[20]="pradeep ";   // ye jo prajapati hI VO first string me jud jayega usme 20 box
                                    // ke liye jagah reserve hai prajapati bhi aaram se aa jayega
    char last[]="prajapati";
    strcat(first,last);
    printf("full name = %s\n", first);
   

    return 0;
}

