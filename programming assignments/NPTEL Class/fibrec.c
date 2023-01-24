// #include<stdio.h>
// int fib(int num)
// {
//     int f;
//     if (num==1)
//     {
//         return 0;
//     }
//     else if (num == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(num-1) + fib(num-2);
//     }

// }
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//        printf("%d ",fib(i));
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a = 3, b = 4;
// printf("%d %d %d", a+b, a-b, ++a*b);
// // printf("%d %d", a, a++);
// // printf("%d %d", a++, a);
// return 0;
// }

// #include<stdio.h>
// int sum(int n)
// {
//     if( n == 1)
//     return 1;
//     else
//     return n + sum(n-1);
// }
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     printf("%d", sum(num));
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int t = 1; t <= n - i; t++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("❤");
        }

        printf("\n");
    }
    return 0;
}