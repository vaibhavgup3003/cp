#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the value in degree Celcius \n");
    scanf("%f", &c);
    f = (((c * 9) / 5) + 32);
    printf("%f \n", f);
}