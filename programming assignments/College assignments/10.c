#include <stdio.h>
int main()
{
    int price;
    printf("Enter the the price of the shopping \n");
    scanf("%d", &price);
    if (100 <= price < 500)
    {
        printf("A key ring \n");
    }
    else if (500 <= price < 1000)
    {
        printf("A leather purse \n");
    }
    else if (price > 1000)
    {
        printf("A pocket calculator \n");
    }
    printf("THANK YOU \n");
}