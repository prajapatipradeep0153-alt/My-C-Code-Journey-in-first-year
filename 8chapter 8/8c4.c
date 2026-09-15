// strlen() used to find the length of a string

#include <stdio.h>
#include <string.h>
int main()
{
    char city[] = "mumbai";
    int length = strlen(city);
   printf("string=%s\n", city);
    printf("length=%d\n", length);
    puts(city);
  // puts(length);//STRING KE LIYE SIRF
    return 0;
}
