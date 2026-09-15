//Write a program to generate multiplication table of a given number in text format.
//Make sure that the file is readable and well formatted.

#include <stdio.h>
int main()
{
FILE *ptr;
ptr=fopen("pk2.txt","w");
int num=4;
for(int i=0; i<10; i++){

fprintf(ptr , "%d\n", num*(i+1));

}
    return 0;
}
