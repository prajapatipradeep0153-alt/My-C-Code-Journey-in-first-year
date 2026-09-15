// 90 se more then grade A
// 75 se more then grade B
// 60 se more then grade C
// 40 se more then grade D
// 40 se less then fail
#include <stdio.h>
int main()
{
    int marks = 95;
    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    if (marks >= 75)
    {
        printf("Grade B\n");
    }
    if (marks >= 60)
    {
        printf("Grade C\n");
    }
   if (marks >= 40)
    {
        printf("Grade D\n");
    }
  if(marks<40)
    {
        printf("Fail\n");
    }

    return 0;
}

// agar if lagaoge to multiple ans aayenge