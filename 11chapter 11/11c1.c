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
    ptr[1] = 20;
    printf("%d\n", ptr[0]);
    return 0;
}

/*
malloc() का use तब करते हैं जब array का size पहले से पता नहीं होता।
जैसे user से पूछा:
scanf("%d", &n);
अब user चाहे 5, 100, या 10000 दे। malloc() उतनी ही memory बनाता है:
*/