//Solve Problem 1 using calloc()

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6; // eskA matalab ki mai memory se bol raha hu ki mujhe 6 block bana ke do mujhe 6 alag alag integer
               // store karna hai
    int *ptr;
    ptr = calloc(n,  sizeof(int));// ye memory allocate karta hai jitna integer store karna hai utna hi memory allocate karega
                                  //ptr[0]   ptr[1]   ptr[2]   ptr[3]   ptr[4]   ptr[5] aisa allocate huaa
    for (int i = 0; i < 6; i++)
    {

        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)  //Memory mein stored 6 values ko ek-ek karke print karega.
    {

        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}
