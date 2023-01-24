#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age<18, age> 0)
    {
        printf(" You are a minor\n");
    }
    else if (age > 18)
    {
        printf("you are a major\n");
    }
    else
    {
        printf("Invalid age\n");
    }
    printf("Name: Vaibhav Gupta\nRoll No. 21H002\n");
}