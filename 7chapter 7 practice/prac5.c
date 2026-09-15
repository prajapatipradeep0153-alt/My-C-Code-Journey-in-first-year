//rite a program containing a function which reverses the array passed to it




/*

=================================================================
   PROGRAM FLOW DIAGRAM - 3 SECTIONS: printArray | reverse | main
=====================================================================

   OVERALL EXECUTION ORDER
   --------------------------
        Program always starts at main(), NOT at the top of the file.

        [ main() starts ]
              |
====
              v
        arr[] = {1,2,3,4,5,6}  created
              |
              v
        CALL --> printArray(arr,6)   [SECTION 1 - runs 1st time] ye original ko print kar raha
              |
              v
        CALL --> reverse(arr,6)      [SECTION 2 - runs]
              |
              v
        CALL --> printArray(arr,6)   [SECTION 1 - runs 2nd time] ye reverse vale jo number hai unko print kar raha
              |
              v
        return 0  -->  program ends


=====================================================================
   SECTION 1: printArray(a, n)  -- called TWICE
=====================================================================

        void printArray(int a[], int n) {
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

        1st CALL (before reverse) - array is {1,2,3,4,5,6}
        --------------------------------------------------------
        i=0 -> a[0]=1 -> print "1 "
        i=1 -> a[1]=2 -> print "1 2 "
        i=2 -> a[2]=3 -> print "1 2 3 "
        i=3 -> a[3]=4 -> print "1 2 3 4 "
        i=4 -> a[4]=5 -> print "1 2 3 4 5 "
        i=5 -> a[5]=6 -> print "1 2 3 4 5 6 "
        i=6 -> 6<6 FALSE -> loop ends
        printf("\n") -> new line
        SCREEN SHOWS: 1 2 3 4 5 6

        2nd CALL (after reverse) - array is now {6,5,4,3,2,1}
        --------------------------------------------------------
        Same loop logic, but array content has changed!
        SCREEN SHOWS: 6 5 4 3 2 1


=====================================================================
   SECTION 2: reverse(arr, n)  -- called ONCE, does the real work
=====================================================================

        void reverse(int arr[], int n) {
            int temp;
            for (int i = 0; i < n/2; i++) {
                temp = arr[i];
                arr[i] = arr[n-i-1];
                arr[n-i-1] = temp;
            }
        }

        n = 6  -->  loop runs only n/2 = 3 times (i = 0,1,2)
        n-i-1 formula finds the "mirror" index from the other end

        BEFORE: [1][2][3][4][5][6]
                 0  1  2  3  4  5   <- index

        --------------------------------------------------------
        ROUND i=0   (opposite index = n-i-1 = 6-0-1 = 5)
        --------------------------------------------------------
            temp     = arr[0]         -> temp = 1
            arr[0]   = arr[5]         -> arr[0] = 6
            arr[5]   = temp           -> arr[5] = 1

            Array now: [6][2][3][4][5][1]

        --------------------------------------------------------
        ROUND i=1   (opposite index = n-i-1 = 6-1-1 = 4)
        --------------------------------------------------------
            temp     = arr[1]         -> temp = 2
            arr[1]   = arr[4]         -> arr[1] = 5
            arr[4]   = temp           -> arr[4] = 2

            Array now: [6][5][3][4][2][1]

        --------------------------------------------------------
        ROUND i=2   (opposite index = n-i-1 = 6-2-1 = 3)
        --------------------------------------------------------
            temp     = arr[2]         -> temp = 3
            arr[2]   = arr[3]         -> arr[2] = 4
            arr[3]   = temp           -> arr[3] = 3

            Array now: [6][5][4][3][2][1]

        --------------------------------------------------------
        CHECK: i=3  -->  3 < n/2 (3<3) FALSE  -->  loop ENDS
        --------------------------------------------------------

        AFTER:  [6][5][4][3][2][1]   <-- fully reversed!

        NOTE: this function prints NOTHING. It only changes the
        array quietly in memory (because arr[] here points to the
        SAME memory as main()'s arr - no copy is made).


=====================================================================
   SECTION 3: main()  -- the controller that ties everything together
=====================================================================

        int main() {
            int arr[] = {1, 2, 3, 4, 5, 6};   // Step A: array created
            printArray(arr, 6);               // Step B: prints original
            reverse(arr, 6);                  // Step C: reverses in-place
            printArray(arr, 6);                // Step D: prints reversed
            return 0;                          // Step E: program ends
        }

        FINAL SCREEN OUTPUT:
        --------------------------------------------------------
        1 2 3 4 5 6
        6 5 4 3 2 1

=====================================================================
   KEY TAKEAWAY
   --------------------------------------------------------------
   printArray() is called twice but shows DIFFERENT output each
   time -- because reverse() modified the SAME array in between.
   This works because arrays are passed by ADDRESS (pointer),
   not by copying the values.
=====================================================================
*/

#include <stdio.h>
     void printarray(int a[], int n){
    for (int i = 0; i < n; i++) {    //a mein sirf first element ka address aaya (jaise 2000)
        printf("%d ", a[i]);        //   Lekin array ke elements memory mein consecutive (lagatar) hote hain
    }                              //Isliye jab loop mein a[i] likhte ho, ye internally *(a + i) ban jaata hai
    printf("\n");
                            }                            //a[i] = *(a+i) ye dono same hai
                                      // a+1 ,a+2 matalab a starting address pint kiya hai +2 ka matalab do elementb aage jao
void reverse(int arr[], int n) {
    int temp;
    for (int i = 0; i < n/2; i++) {         // n/2 ka matalab hame kitne bar number swap karna hai
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);   // Section 1 - 1st call
    reverse(arr, 6);      // Section 2
   printArray(arr, 6);   // Section 1 - 2nd call
    return 0;
}
