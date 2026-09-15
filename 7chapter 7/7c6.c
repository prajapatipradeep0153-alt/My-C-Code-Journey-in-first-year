/*
=====================================================================
   PROGRAM FLOW DIAGRAM - Array Passed to Function via Pointer
=====================================================================

   STEP 1: Program starts
   -----------------------
        [ main() ]
             |
             v

   STEP 2: Array created in memory (consecutive addresses)
   ---------------------------------------------------------
        marks[5] = {90, 85, 70, 95, 60}

        +------+------+------+------+------+
        |  90  |  85  |  70  |  95  |  60  |
        +------+------+------+------+------+
        2000   2004   2008   2012   2016      <-- addresses

        size = 5  (stored separately)

             |
             v

   STEP 3: Function call
   -----------------------
        printArray(marks, size);

        marks  -->  passes ADDRESS 2000 (NOT a copy of the array)
        size   -->  passes VALUE 5

             |
             v

   STEP 4: Inside printArray() - new local variables created
   -------------------------------------------------------------
        void printArray(int *arr, int n)

        arr = 2000   <-- points to SAME memory as marks
        n   = 5

        +-----------------------------------------------+
        |  main()  marks (2000) ----+                    |
        |                            |  SAME ADDRESS      |
        |  printArray()  arr (2000)-+                    |
        +-----------------------------------------------+

             |
             v

   STEP 5: Loop runs - arr[i] becomes *(arr + i)
   --------------------------------------------------
        i=0  -->  *(arr+0)  -->  address 2000  -->  90
        i=1  -->  *(arr+1)  -->  address 2004  -->  85
        i=2  -->  *(arr+2)  -->  address 2008  -->  70
        i=3  -->  *(arr+3)  -->  address 2012  -->  95
        i=4  -->  *(arr+4)  -->  address 2016  -->  60

        (each step: pointer moves by sizeof(int) = 4 bytes)

             |
             v

   STEP 6: Output printed
   -------------------------
        90 85 70 95 60

             |
             v

   STEP 7: Function ends
   ------------------------
        arr, n (local to printArray) --> destroyed
        marks (local to main)        --> still safe

             |
             v

   STEP 8: main() ends --> return 0

=====================================================================
*/

#include <stdio.h>

void printArray(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // arr[i] internally = *(arr + i)
    }
    printf("\n");
}

int main() {
    int marks[5] = {90, 85, 70, 95, 60};
    int size = 5;

    printArray(marks, size);   // marks decays to address, size passed by value

    return 0;
}
