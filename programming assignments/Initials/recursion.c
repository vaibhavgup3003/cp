#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int input;
    printf(" Enter the number you want the factorial of \n");
    scanf("%d", &input);
    printf(" The factorial of the entered value is %d \n", factorial(input));
}