#include <stdio.h>
int main()
{
    int m;
    int num;
    int sum = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("%d", sum);
    return 0;
}
// including i in the loop body is not necessary but it must be initiallised.
