#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, n3;
    printf("Enter the number of terms to be calculated of the fibonacci series \n");
    scanf("%d", &n);
    printf("%d, %d", n1, n2);
    for (int i = 3; i <= n; i++)
    {
        n3 = (n1 + n2);
        n1 = n2;
        n2 = n3;
        printf(", %d", n3);
    }
    printf("\n");
}