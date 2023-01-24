#include <stdio.h>
int main()
{

    int i, num, ans;
start:
    printf(" Enter the number you want the factorial of \n");
    scanf("%d", &num);

    for (i = 1, ans = 1; i <= num; i++)
    {
        (ans = ans * i);
    }
    printf("Value of the %d is %d \n", num, ans);
    goto start;
}