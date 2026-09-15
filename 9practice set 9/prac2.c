// Write a function sum vector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
/*
#include <stdio.h>

struct vector
{

    int i;
    int j;
};

struct vector sumvector(struct vector v1, struct vector v2) // yaha int ke jagah struct vector kyo likha kyoki
                                                            // int bhi data type hai & struct vector bhi data type hai
{

    struct vector v3 = {v1.i + v2.i, v1.j + v2.j}; //{} struct ke members ko initialize karne ke liye use hota hai.
    return v3;
}

int main()
{

    struct vector v1 = {2, 4};
    struct vector v2 = {6, 8};

    struct vector v3 = sumvector(v1, v2); // sirf v1 and v2 kyo likha kyoki ham ushi ko likhte hai eske andar()jo variable
                                          // kyoki usi ke andar value store hai jbki hame value ki copy bhejna hai

    printf("the value of vector=%di +%dj\n", v3.i, v3.j);

    return 0;
}*/

    // same as

#include <stdio.h>

typedef struct vector                // agar typedef ka use karu to
{

int i;
int j;
}vv;                        // ab maine data type ka name vv rakh diya ab mujhe struct vector likhne ki jarurat nahi

vv sumvector(struct vector v1, struct vector v2)

{

vv  v3 = {v1.i + v2.i, v1.j + v2.j};
return v3;
}

int main()
{

vv v1 = {2, 4};
vv v2 = {6, 8};

vv   v3 = sumvector(v1,v2);


printf("the value of vector=%di +%dj\n",v3.i ,v3.j);

return 0;
}
