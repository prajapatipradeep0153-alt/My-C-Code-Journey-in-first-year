#include <stdio.h>
int main()
{
    int a = 1, b = 1;
    printf("the value of a and b is %d\n", a&&b);
    printf("the value of a and b is %d\n", a||b);
   printf("the value of a and b is %d\n", !b);


if(a && b){

    printf("the value of a and b is 1\n");
}

// same as above
if(a) {
 if(b) {
     printf("the value of a and b is 1\n");
 }
} 
    return 0;
}
