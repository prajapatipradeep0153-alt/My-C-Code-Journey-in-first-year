// Create an array of 5 complex numbers created in Problem 5 and display them with the
// help of a display function. The values must be taken as an input from the user.

#include <stdio.h>
typedef struct c
{
    int real;
    int imagenary;

} complex; // semicolon lagana compulsory hai
// jab bhi yaha name assume karunga to typedef likhna compulsory hai

void display(complex d)
{

    printf("z = %d + %di\n", d.real,d.imagenary);// d. esh liye likha kyoki d me value aa gayi complex to data type hai
}
int main()
{
    complex num[5];               //complex data type ka naam hai aur num array ka name
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real part\n");
        scanf("%d", &num[i].real);

        printf("enter the imagenary  part\n");
        scanf("%d", &num[i].imagenary);
        display(num[i]);
    }
    return 0;
}