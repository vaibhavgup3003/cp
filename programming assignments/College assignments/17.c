
#include <stdio.h>
#include <math.h>
int main()
{
    int A, x1, y1, x2, y2, x3, y3;
    printf("Enter the three vertices of the triangle \n");
    scanf("%d %d %d %d %d %d ", &x1, &y1, &x2, &y2, &x3, &y3);

    A = ((x1 * y2) - (x1 * y3) - (y1 * x2) + (y1 * x3) + (x2 * y3) - (y2 * x3));

    if (A == 0)
    {
        printf("The points are collinear \n");
    }
    else
    {
        printf(" The points are not collinear \n");
    }
}