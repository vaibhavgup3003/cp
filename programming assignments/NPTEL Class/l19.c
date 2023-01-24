#include <stdio.h>
int main()
{
    int n;
    int curr, prev, pprev;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &curr);
        if (curr <= 0)
        {
            continue;
        }
        else
        {
            if (curr > 0)
            {
                curr = pprev;
                scanf("%d", &curr);
                if (curr <= 0)
                {
                    continue;
                }
                else
                {
                    curr = prev;
                }
            }
        }

        if ((pprev * pprev) + (prev *
                               prev) ==
            (curr * curr))
        {
            printf("this is a pythagorean triplet");
        }
    }
}

// int maxchar;
// int i;
// char curr;
// char prev;
// scanf("%d", &maxchar);
// getchar() = curr;
// printf("%c", curr);