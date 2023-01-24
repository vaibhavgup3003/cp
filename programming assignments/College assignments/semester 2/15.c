#include<stdio.h>
void main ()
{ int x1, y1, x2, y2, x3, y3, A;
scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
A = (x1*(y2-y3)) - (y1*(x2 - x3)) + ((x2*y3) - (y2*x3));
if (A==0)
{printf("Points are collinear\n");
}
else{
    printf("Points are not collinear");
}
printf("Name: Vaibhav Gupta\nRoll No. 21H002");

}
