#include <stdio.h>
int main()
{
     char name;
    int marks, x, grade;
    printf("Enter you name and marks obtained out of 150 \n");
    scanf("%s %d", &name, &marks);
    x = ((marks / 150) * 100);
    if (x >= 80)
    {
        printf("The grade is A \n");
    }
    else if (80 > x >= 60)
    {
        printf("The grade is B \n");
    }
    else if (60 > x >= 40)
    {
        printf("The grade is C \n");
    }
    else if (x < 40)
    {
        printf("The grade is F 'FAIL'\n");
    }
}