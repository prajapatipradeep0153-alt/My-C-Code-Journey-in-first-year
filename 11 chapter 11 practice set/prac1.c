//Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6;  // eskA matalab ki mai memory se bol raha hu ki mujhe 6 block bana ke do mujhe 6 alag alag integer 
                // store karna hai
    int *ptr;
    ptr = malloc(n * sizeof(int)); // ye memory allocate karta hai jitna integer store karna hai utna hi memory allocate karega
    ptr[0] = 20;
    ptr[1] = 30;

    ptr[2] = 40;
    ptr[3] = 50;

    ptr[4] = 60;
    ptr[5] = 70;
/*
    ptr[6] = 80;   ye dono ke liye memory allocate hui hi nahi
    ptr[7] = 90;
    */

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);
   // printf("%d\n", ptr[6]);
  //  printf("%d\n", ptr[7]);
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