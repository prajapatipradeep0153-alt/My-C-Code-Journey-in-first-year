/*    Recursion ka main concept

① Function khud ko call karta hai
count(n - 1);

② Har baar problem chhoti ho rahi hai
5 → 4 → 3 → 2 → 1 → 0

③ Base condition function ko rok deti hai
if (n == 0)
{
    return;
} */

#include <stdio.h>
void count(int n)
{
    if (n == 0)
    {

        return;
    }

    printf("%d\n", n);

    count(n - 1);
}

int main() {

count(6);


return 0;
}