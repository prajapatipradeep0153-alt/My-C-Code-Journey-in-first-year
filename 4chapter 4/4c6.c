#include <stdio.h>
int main()
{
    int n;     // n last hoga aur last me n print hoga sirf
    int i = 1; // yaha se start hoga numbering
    printf("enter the value of n\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);

        i++;

    } while (i <= n);
    return 0;
}
