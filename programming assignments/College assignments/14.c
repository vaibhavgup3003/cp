#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three angles of the triangle \n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b + c) == 180)

    {
        printf("The entered angle constitutes the angle of a triangle \n");
    }
    else
    {
        printf("The entered angle does not constitutes the angle of a triangle \n");
    }
}