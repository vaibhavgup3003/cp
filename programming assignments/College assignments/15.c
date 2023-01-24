#include <stdio.h>
#include <math.h>
int main()
{
    float Ac, C, P, Ar, r, a, b;
    printf("Enter the radius of the circle \n");
    scanf("%f", &r);
    Ac = (M_PI * pow(r, 2));
    C = 2* M_PI * r;
    printf("The area of the circle is %f \n", Ac);
    printf("The circumfearence of the circle is %f \n", C);

    printf("Enter the value of dimensions of rectangle \n");
    scanf("%f %f", &a, &b);
    Ar = (a * b);
    printf("The area of the rectangle is %f \n", Ar);
    P = (2 * (a + b));
    printf("The perimeter of the rectangle is %f \n", P);
}