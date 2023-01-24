#include <stdio.h>
int main()
{
    int p;
    int c;
    int l = 0;
    int max = 0;
    scanf("%d", &p);
    if (p != -1)
    {
        l = 1, max = 1;
        scanf("%d", &c);
        while (c != -1)
        {
            if (p < c)
            {
                l = l + 1;
            }
            else
            {
                if (max < l)
                {
                    max = l;
                    l = 1;
                }
            }
            p = c;
            scanf("%d", &c);
        }
        if (max < l)
        {
            max = l;
        }
    }
    else
    {
        max = 0;
    }
    printf("%d\n", max);
}
