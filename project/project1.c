#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random_number = (rand() % 100) + 1;

    //  printf("Random number: %d\n", n);
    int guessed_number;
    int NO_of_guesses = 0;
    /*printf("guess the number");== aise me sirf ek bar hi chhhap ke aayega
    par lekin esh game me loop kai baar chalega esh liye eshe do ke andar likhenge
    jisse user ko bar bar dikhe*/

    /*scanf("%d", &guessed_number);==agar bahar likhe to sirf ek hi baar number user de payega
    lekin eshme user multiple time number ko type karega esh liye esko bhi do ke andar likhenge */

    do
    {
        printf("guess the number");
        scanf("%d", &guessed_number);

        if (guessed_number < random_number)

        {

            printf("please higher number\n ");
        }

        else if (guessed_number > random_number)
        {

            printf("please lower number\n");
        }
        else
        {

            printf("congrates");
        }

        NO_of_guesses++;
    } while (guessed_number != random_number);
    
printf("you guess the number in %d guesses\n",NO_of_guesses);
    return 0;
    
}