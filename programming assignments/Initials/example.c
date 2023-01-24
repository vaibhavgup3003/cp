#include <stdio.h>
int main()
{
    int mark;
    printf(" Enter your marks here \n");
    scanf(" %d", &mark);
    printf(" You have entered %d as your marks \n", mark);
    if (mark >= 8)
    {
        printf(" You have a good image in your college \n");
    }
    else if (mark <= 8, mark > 6)
    {
        printf(" You will have average looking \n");
    }
    else
    {
        printf(" You will have no image in your college\n");
    }
}
