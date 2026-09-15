// Write a program to change the value of a variable to ten times its current value. using pointer

#include <stdio.h>

void change_value_ten_times(int *);
void change_value_ten_times(int *a)   //int *a  ka matlab:a ek pointer hai, jisme x ka address stored hai.
{

    *a = *a * 10;
}

int main()
{
    int x = 15;
    printf("the value of x is %d\n", x);

    change_value_ten_times(&x);

printf("the value of variablr is %d\n", x);
    return 0;
}
/* 
x = 15
 ↓
&x → x ka address function ko gaya
 ↓
a → x ka address
 ↓
*a → x ki value = 15
 ↓
*a = *a * 10   ye x ki original value ko change kar raha hai
 ↓
15 × 10 = 150
 ↓
original x = 150
 ↓
main() mein wapas
 ↓
150 print
*/