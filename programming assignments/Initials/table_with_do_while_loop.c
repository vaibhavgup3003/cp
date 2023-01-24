#include <stdio.h>
int main()
{
    int num, index = 0;
    printf(" Enter a number \n");
    scanf("%d", &num);

    do
    {
        index = index + 1;
        printf("%d x %d = %d\n", num, index , num * (index));
    } while (index < 10);
}
