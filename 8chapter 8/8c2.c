#include <stdio.h>
int main()
{
    char new [50];

    printf("Enter your name: ");
    scanf("%s", new);

    printf("hello %s thanks for visit", new);
}
        
  /*  
scanf ko hamesha address chahiye hota hai (isko yaad rakho — scanf hamesha address maangta hai, value nahi).

age ek normal variable hai — uska address nikalne ke liye &age likhna padta hai
Lekin new (array) khud hi ek address hai (jaise humne pehle Arrays topic mein seekha tha — array ka naam = first element ka address)


*/

// no print fu;ll nsme like pradeep prajapti