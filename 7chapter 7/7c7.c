// es program ko dubara achhe se padh and practice kar



/*
=====================================================================
   PROGRAM FLOW DIAGRAM - 2D Array: Take Input from User + Display
=====================================================================

   STEP 1: Program starts
   -----------------------
        [ main() ]
             |
             v

   STEP 2: Empty 2D array created (no values yet)
   --------------------------------------------------
        int arr[2][3];     <-- just reserves memory, garbage values

        [ ? ][ ? ][ ? ]     <-- row 0
        [ ? ][ ? ][ ? ]     <-- row 1

             |
             v

   STEP 3: INPUT PHASE - Nested loop fills the array
   ------------------------------------------------------
        for (i = 0; i < 2; i++) {        <-- OUTER LOOP (controls ROW)
            for (j = 0; j < 3; j++) {    <-- INNER LOOP (controls COLUMN)
                scanf(...) -> arr[i][j]
            }
        }

        TRACE TABLE:
        --------------------------------------------------
        i=0 (outer starts)
            j=0  -> ask & store arr[0][0]
            j=1  -> ask & store arr[0][1]
            j=2  -> ask & store arr[0][2]
            j=3  -> 3<3 FALSE -> inner loop ENDS
        --------------------------------------------------
        i=1 (outer moves to next row)
            j=0  -> ask & store arr[1][0]     <-- inner loop restarts fresh!
            j=1  -> ask & store arr[1][1]
            j=2  -> ask & store arr[1][2]
            j=3  -> 3<3 FALSE -> inner loop ENDS
        --------------------------------------------------
        i=2  -> 2<2 FALSE -> outer loop ENDS

        Total scanf calls = outer(2) x inner(3) = 6 times

             |
             v

   STEP 4: Array is now fully filled
   --------------------------------------
        [ 1 ][ 2 ][ 3 ]     <-- row 0
        [ 4 ][ 5 ][ 6 ]     <-- row 1
        (example values entered by user)

             |
             v

   STEP 5: Function call
   -----------------------
        displayArray(arr, 2, 3);

        arr  -> passes ADDRESS of the array (not a copy)
        2    -> rows
        3    -> cols

             |
             v

   STEP 6: DISPLAY PHASE - Nested loop prints the array
   ---------------------------------------------------------
        for (i = 0; i < rows; i++) {          <-- OUTER LOOP (row)
            for (j = 0; j < cols; j++) {      <-- INNER LOOP (column)
                printf("%d ", arr[i][j]);
            }
            printf("\n");   <-- runs AFTER inner loop finishes (new row)
        }

        TRACE TABLE:
        --------------------------------------------------
        i=0
            j=0 -> print arr[0][0]=1   -> screen: "1 "
            j=1 -> print arr[0][1]=2   -> screen: "1 2 "
            j=2 -> print arr[0][2]=3   -> screen: "1 2 3 "
            (inner loop ends) -> printf("\n") -> go to new line
        --------------------------------------------------
        i=1
            j=0 -> print arr[1][0]=4   -> screen: "4 "
            j=1 -> print arr[1][1]=5   -> screen: "4 5 "
            j=2 -> print arr[1][2]=6   -> screen: "4 5 6 "
            (inner loop ends) -> printf("\n") -> go to new line
        --------------------------------------------------
        i=2 -> 2<2 FALSE -> outer loop ENDS -> function ENDS

             |
             v

   STEP 7: Final Output on screen
   -----------------------------------
        1 2 3
        4 5 6

             |
             v

   STEP 8: main() ends --> return 0

=====================================================================
   KEY POINT: printf("\n") is INSIDE outer loop but OUTSIDE inner loop
   -> that's why a new line appears only after each FULL row is done
=====================================================================
*/

#include <stdio.h>

void displayArray(int arr[][3], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");   // new line after each row finishes
    }
}

int main() {
    int arr[2][3];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe 2D array is:\n");
    displayArray(arr, 2, 3);

    return 0;
}