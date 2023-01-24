#include <stdio.h>
int main()
{
    int num, x, y, z, w;
    printf("Enter the number \n");
    scanf("%d", &num);
    w = num % 10;
    z = ((num / 10) % 10);
    y = (((num / 10) / 10) % 10);
    x = ((((num / 10) / 10) / 10) % 10);
    printf("The reverse of the entered number is %d%d%d%d \n", w, z, y, x);
}