#include <stdio.h>
int main()
{
    int num, x, c;
    printf(" Enter a number \n");
    scanf("%d", &num);
    (x = (num % 10));
    printf("%d \n", x);
    c = (x % 2);
    printf("%d", c);
    if (c == 0)
    {
        printf(" The number entered is divisible by 2 \n");
    }
    else
    {
        printf(" The entered number is not divisible by 2 \n");
    }
}