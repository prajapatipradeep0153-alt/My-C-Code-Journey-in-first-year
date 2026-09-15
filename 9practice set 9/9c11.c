// Solve problem 9 for time using typedef keyword.
#include <stdio.h>


typedef struct date
{

    int dd;
    int mm;
    int yyyy;
} DT;

int compare(DT d1, DT d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }

    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }

    else if (d1.mm > d2.mm)
    {
        return 1;
    }

    else if (d1.mm < d2.mm)
    {
        return -1;
    }

    else if (d1.dd > d2.dd)
    {
        return 1;
    }

    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    DT d1 = {5, 3, 2050};
    DT d2 = {5, 3, 2050};
    printf("%d\n", compare(d1, d2));

    return 0;
}
// c language me agar (-) me aata hai mtalab chhotA  hai
// agar (+) me aata hai to matalab vo bada ahi