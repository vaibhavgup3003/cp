#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The entered numbers are %d, %d and %d\n", a, b, c);
    if (a > (b, c))
    {
        if (a * a == (b * b) + (c * c))
        {
            printf("The given numbers form a pythagorean triplet \n");
        }
        else
        {
            printf("The numbers do not form a pythagorean triplet \n");
        }
    }
    if ((b > (a, c)))
    {
        if (b * b == (a * a + c * c))
        {
            printf("The entered numbers are pythagorean triplet \n");
        }
        else
        {
            printf("The numbers do not form a pythagorean triplet \n");
        }
    }
    if (c > (a, b))
    {
        if (c * c == (a * a + b * b))
        {
            printf("The entered numbers form a pythagorean triplet \n");
        }
        else
        {
            printf("The numbers do not form a pythagorean triplet \n");
        }
    }
}