#include <stdio.h>
int main(void)
{
    int a = 123, b = -123, c = 12345;
    printf("%2d", c);
    printf("%-10.2d\n", c);
    printf("%-10.2d\n", c);
    printf("%-7d\n", a);
    printf("%7.2d\n", a);
    printf("%07d\n", a);
    printf("%-9.4d\n", a);
    printf("%+9.4d\n", a);
    printf("%+07d\n", a);
    printf("%+7.4d\n", a);
    printf("%-7.4d\n", a);
    printf("%-8d\n", b);
    printf("%-8.2d\n", b);
    printf("%-8.4d\n", b);
    return 0;
}