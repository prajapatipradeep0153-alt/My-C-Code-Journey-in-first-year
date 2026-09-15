#include <stdio.h>
int main()
{
    FILE *ptr; 
    ptr = fopen("pradeep4.txt", "r");
    
    while(1){

char ch = fgetc(ptr); // used to read the character from file, file का पहला character p पढ़ेगा और c में रखेगा।
    printf("%c", ch);
if(ch==EOF){   //es loop ko tab tak chalao jab tak file puri read hoke khatm nahi ho jati
    break;
}

    }
   fclose(ptr);
    return 0;
}