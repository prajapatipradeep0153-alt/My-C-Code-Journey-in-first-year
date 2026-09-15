//use of realloc


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    //int arr[n];   // not allowed in c
    ptr = malloc(n * sizeof(int));   // n integers जितनी memory बनाता है

    ptr[0] = 10;
    
    printf("%d\n", ptr[0]);
    ptr=realloc(ptr,10*sizeof(int));
    return 0;
}
