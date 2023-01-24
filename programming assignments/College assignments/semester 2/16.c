#include<stdio.h>
#include<math.h>
int main ()
{
    int x0, y0, r, x ,y, E;

scanf("%d%d%d", &x0, &y0, &r);
printf("Enter the point\n");
scanf("%d%d", &x, &y);

E = pow (x-x0,2) + pow (y-y0,2) - pow (r,2);
if (E == 0)
{
    printf("Point is on the circle\n");
}
else if (E<0)
{
    printf("Point is inside the circle\n");
}
else{
    printf("Point is outside the circle\n");
}

return 0;
}
