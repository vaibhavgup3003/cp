#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    int rowindex = 0;
    int colindex;
    int rowsum;
    int rowsumsq;
    int finalsum = 0;
    int num1, num2;
    scanf("%d%d", &m, &n);
    printf("Number of rows are %d and number of columns are %d\n", m, n);
    while (rowindex < m)
    {
        rowsum = 0;
        colindex = 0;
        while (colindex < n)
        {
            scanf("%d", &num1);
            printf("%d\n", num1);
            rowsum = rowsum + num1;
            colindex = colindex + 1;
        }

        rowsumsq = rowsum * rowsum;
        finalsum = finalsum + rowsumsq;
        rowindex = rowindex + 1;
    }
    printf("%d\n", finalsum);
}
