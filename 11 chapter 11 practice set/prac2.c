// Use the array in Problem 1 to store 6 integers entered by the user.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6; // eskA matalab ki mai memory se bol raha hu ki mujhe 6 block bana ke do mujhe 6 alag alag integer
               // store karna hai
    int *ptr;
    ptr = malloc(n * sizeof(int));// ye memory allocate karta hai jitna integer store karna hai utna hi memory allocate karega
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

/*
मुझे 6 int values रखने जितनी memory चाहिए।

यानी memory में 6 जगह:
ptr[0]   ptr[1]   ptr[2]   ptr[3]   ptr[4]   ptr[5]
  ↓        ↓        ↓        ↓        ↓        ↓
  20       30       40       50       60       70
तो हाँ, तुम ऐसे समझ सकते हो:
"मुझे 6 अलग-अलग integer values रखने के लिए जगह दो।"

malloc() → memory लो
काम करो
free()   → memory वापस छोड़ो

*/