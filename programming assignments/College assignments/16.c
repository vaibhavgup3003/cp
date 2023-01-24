#include <stdio.h>
#include <math.h>
int main()
{
    char input;
    int D, a, b, c, x1, x2;
    scanf("%d %d %d", &a, &b, &c);
    D = ((b * b) - (4 * a * c));
    if (a == 0 && b == 0)

    {
        printf("The equation has no solution \n");
        goto end;
    }
    x1 = ((-b + sqrt(D)) / 2 * a);
    printf("%d \n", x1);
    printf("%d \n", x2);
end:
    return 0;
}