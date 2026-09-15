#include <stdio.h>
int main()
{
    int age=13;
    if(age>=18){
printf("you are eligible for drive vehicle\n");
    }
   
else if(age>=60){
    printf("you are eligible for drive vehicle but you are senior citizen\n");
}
else if(age<18){
    printf("you are not eligible for drive vehicle\n");
}
return 0;
}

