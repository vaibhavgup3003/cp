#include <stdio.h>
int main()
{
    int input, i = 0;
    printf(" Enter a number \n ");
    scanf("%d", &input);
    while (i < 10)
    {
        i = i + 1;
        printf("%d x %d = %d \n", input, i, i * input);
    }