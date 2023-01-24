#include <stdio.h>
int main()
{
    int i = 1, input;
    scanf("%d", &input);
    for (i = 1; i < 11; i++)
        printf(" %d x %d = %d \n", input, i, i * input);
    if (input > 10)
    {
        // break;
    }
}