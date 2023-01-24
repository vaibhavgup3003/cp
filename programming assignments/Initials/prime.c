#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % num == 0 && num % 1 == 0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}