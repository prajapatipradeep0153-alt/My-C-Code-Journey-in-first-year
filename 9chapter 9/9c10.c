// typedef se ham kisi bi naam ko data type bana sakte hai

#include <stdio.h>
int main()
{

    typedef int pradeep; // yaha par bola ki pradeep ko int data type jaise bana do mean (int=pradeep)
   pradeep a = 100;     // yaha par pradeep int jaisa kaam karega
   // int a = 100;         // yaha agar int bhi likhj dge to bhi kaam karega

    printf("the value of a is %d\n", a);
    return 0;
}