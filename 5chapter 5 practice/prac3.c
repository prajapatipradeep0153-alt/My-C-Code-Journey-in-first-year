// Writea function to calculate force of attraction on a body of mass 'm' exerted by
// earth. Consider g • 9.8m/s* F=MG

#include <stdio.h>

float force(float mass);
float g = 9.8;
float force(float mass)
{

    float F = (mass * g);
    return F;
}

int main()
{
    float F = force(25);
    printf("force=%.2f N ", F);

    return 0;
}
