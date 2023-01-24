#include <stdio.h>
int main()
{
    int num;
    float sum = 0;
    float i;

    printf("Enter the number \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + (1 / i);
    }
    printf("%f\n", sum);
}
// integer input gives only integral division i.e for 1/i to floating point number
// i must be a floating point number.