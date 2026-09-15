#include <stdio.h>                   
int add(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main(){

int result= add(10, 20);
printf("result=%d\n", result);

return 0;
}


//program hamara aise ho raha hai

/*Program start
      ↓
    main()
      ↓
add(10, 20) ko call kiya
      ↓
add function ke andar gaya
      ↓
a = 10, b = 20
      ↓
sum = 10 + 20
      ↓
sum = 30
      ↓
return sum
      ↓
30 wapas main() mein aaya
      ↓
result = 30
      ↓
printf("%d", result)
      ↓
Screen par 30 print
      ↓
return 0
      ↓
Program end*/