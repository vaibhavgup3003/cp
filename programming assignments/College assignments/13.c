#include <math.h>
#include <stdio.h>
int main()
{
    float p, r, t, i, c;
    scanf("%f %f %f", &p, &r, &t);
    i = ((p * r) / 100) * t;
    printf("%f", i);

    c = p*pow((1+(r/100)), t);
    printf("%f", c);
    return 0;
}