/*

इस program में user से पूछा जाता है कि कितने int values चाहिए (n)।
 फिर calloc() उतने integers के लिए memory बनाता है। उस memory में पहले value 10 रखकर उसे print करता है।
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    // int arr[n];   // not allowed in c
    ptr = calloc(n, sizeof(int)); //

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    printf("%d\n", ptr[0]);

    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);

    return 0;
}
