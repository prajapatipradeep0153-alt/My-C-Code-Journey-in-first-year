// 90 se more then grade A
// 75 se more then grade B
// 60 se more then grade C
// 40 se more then grade D
// 40 se less then fail
#include <stdio.h>
int main()
{
    int marks = 35;
    if (marks >= 90)
    {
        printf("Grade A\n");
    }
   else if (marks >= 75)
    {
        printf("Grade B\n");
    }
  else  if (marks >= 60)
    {
        printf("Grade C\n");
    }
  else  if (marks >= 40)
    {
        printf("Grade D\n");
    }
  else
    {
        printf("Fail\n");
    }

    return 0;
}

// else if matalab yeh hai ki agar pehla condition false hua to dusra condition check hoga
// aur agar dusra bhi false hua to teesra condition check hoga aur aise hi aage badhega.
// Isse multiple answers nahi aayenge, 
//sirf ek hi answer milega jo first true condition ke liye hoga.
