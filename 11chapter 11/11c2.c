#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n = 5;    // कितने float values रखनी हैं
    float *ptr;

    // int arr[n];   // not allowed in c
    ptr = malloc(n * sizeof(float)); // n integers जितनी memory बनाता है

    ptr[0] = 100;
    ptr[1] = 200;

    ptr[2] = 300;
    ptr[3] = 400;
    ptr[4] = 500;

    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);
    printf("%f\n", ptr[3]);
    printf("%f\n", ptr[4]);

    return 0;
}
