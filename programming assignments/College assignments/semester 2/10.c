#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values of a, b and c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b > c)
    {
        printf("b is largest\n");
    }
    else if (a > b && a > c)
    {
        printf("a is largest\n");
    }
    else
    {
        printf("c is largest\n");
    }
    printf("Name: Vaibhav Gupta\nRoll No. 21H002\n");
}
