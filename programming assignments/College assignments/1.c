#include <stdio.h>
int main()
{
    int num, x, y, z, sum;
    (x + y + z == sum);
Start:
    printf(" Enter the number \n");
    scanf("%d", &num);
    printf("You have entered %d as the input \n", num);
    x = num % 10;
    y = (num / 10) % 10;
    z = num / 100;
    printf("The sum of the digits of the number entered is %d \n", x + y + z);

    if (sum / 3 == 0)
    {
        printf(" Number entered is divisible by 4 \n");
    }
    else
    {
        printf("Number entered is not divisible by 3 \n");
    }
    printf(" The reverse of the digits of entered number is %d%d%d \n", x, y, z);
}
