#include <stdio.h>
int main()
{
    FILE *ptr; // file me jo information hai to ptr  uska address rakhata hai

    ptr = fopen("pradeep1.txt", "r");
    if (ptr == NULL)                   //  ptr वह variable है जिसमें fopen() open file का reference matalab address  रखता है।  
    {                                  // agr ptr ke pass koi address nahi aaya to null ho jayeaga

        printf("the file dosn't exist sorry!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num); //  File से एक integer पढ़कर num में रखता है।
                                 //&num	num का memory address। fscanf इसी address पर value लिखता है।
        printf("the value of num is %d\n", num);

        fscanf(ptr, "%d", &num);

        printf("the value of num is %d\n", num);
        fclose(ptr);
        return 0;
    }
}