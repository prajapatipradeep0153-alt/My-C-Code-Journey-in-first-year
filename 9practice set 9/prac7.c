//Write problem 5's structure using typedef keywords

#include <stdio.h>
typedef struct complex 
{
    int real;
    int imagenary;

} comp; // semicolon lagana compulsory hai
        // jab bhi yaha name assume karunga to typedef likhna compulsory hai

int main()
{
    comp v = {4, 5};
    printf("z = %d + %di\n", v.real, v.imagenary);
    return 0;
}