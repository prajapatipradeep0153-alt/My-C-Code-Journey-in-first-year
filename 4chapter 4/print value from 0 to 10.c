#include <stdio.h>
int main()
{
    int i = 0;

while(i < 10) // while(2<10) kar diya to infinite value aayegi
{

    printf("the value of i is %d\n", i);

    //  i = i + 1;

    i++; // ya i++ ko hata diya jaye to bhi infinite  aayega
}
return 0;
}
