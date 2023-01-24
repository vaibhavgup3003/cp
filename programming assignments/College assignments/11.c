#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the numbers x and y \n");
    scanf("%f %f", &x, &y);
    printf("%f \n", (x + y) / (x - y));
    printf("%f", (x + y) * (x - y));
}