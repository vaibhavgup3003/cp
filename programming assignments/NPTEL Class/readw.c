#include <stdio.h>
int main()
{
    int num;
    while (num != -1)
    {
        scanf("%d", &num);
        printf("%d\n", num);
    }
    printf("-1");
}