#include <stdio.h>
int main()
{
    /*{
    int marks[3] = { 4, 13, 67};
    marks[0] = 34;
    printf(" Marks of student A is %d \n", marks[0]);
    marks[1] = 12;
    printf(" Marks of student B is %d \n", marks[1]);
    marks[3] = 14;
    printf(" Marks of student C is %d \n", marks[3]);

}*/

    // int marks[4] = {5, 10, 15, 20}, i; /*declaration with initiallisation*/
    // for (i = 0; i < 4; i++)
    // {
    //     // printf(" Enter the value of %d element of the array \n", i);
    //     // scanf("%d", &marks[i]);
    //     printf(" The value of %d element of the array is %d \n", i, marks[i]);
    // }
    int marks[2][4] = {{4, 5, 6, 7}, {8, 9, 10, 11}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf(" The value of %d, %d element of the array is %d \n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
}
