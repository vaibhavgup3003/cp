#include <stdio.h>
int main()
{
    float inch, cm, km, mile, foot, pound, kg, meter;
    printf("Enter the value in inch \n");
    scanf("%f", &inch);
    cm = 2.54 * inch;
    printf("Value in cms is %f \n", cm);
}

