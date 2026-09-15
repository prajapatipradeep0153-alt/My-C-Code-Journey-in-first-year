// Write a structure capable of storing date. Write a function to compare those dates
#include <stdio.h>

struct date
{

    int dd;
    int mm;
    int yyyy;
};

int compare(struct date d1, struct date d2)
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
    struct date d1 = {01, 3, 2050};
    struct date d2 = {5, 6, 2025};
    printf("%d\n", compare(d1, d2));

    return 0;
}
// c language me agar (-) me aata hai mtalab chhotA  hai 
//agar (+) me aata hai to matalab vo bada ahi