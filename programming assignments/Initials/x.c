#include <stdio.h>
int main()
{
    int i = 0, input, age;
    printf(" Enter a value to form a table \n");
    scanf("%d", &input);
    i = i + 1;
    printf(" %d x %d = %d \n", input, i, i * input);
    while (i < 10)
    {
        i = i + 1;
        printf(" %d x %d = %d \n", input, i, i * input);
        printf(" Enter your age ");
        scanf("%d", &age);
        if (age == 15)
        {
            continue;
        }
        printf("You can vote for babies or kids");
        printf("You can vote anywhere in the country\n ");
        printf("You can vote anywhere in the country\n ");
        printf("You can vote anywhere in the country\n ");
        printf("You can vote anywhere in the country\n ");
        printf("You can vote anywhere in the country\n ");
        printf("You can vote anywhere in the country\n ");
        printf("You can vote anywhere in the country\n ");
    }
    return 0;
}