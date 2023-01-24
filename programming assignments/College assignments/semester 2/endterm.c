
//1   write a program to read a number n for the numbers from 1 to n find the sum of squares of even numbers and cubes of odd numbers.
// sample input 5 = 73

//2 write a program to read two floating point numbers. add these numbers and assign the result to an integer finally display the value of all the three  variables.

// 3print this pattern
// A
// BB
// CCC
// DDDD
// EEEEE

// 4 FIND THE AVG OF NUMBERS IN A 1D ARRAY OF SIZE 10

// 5 WRITE A C PROGRAM TO ADD TWO COMPLEX NUMBERS USING STRUCTURES.


/*SOLUTIONS*/
// 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    // float sume, sumo;
    float sum=0;
    printf("Enter the number n upto which sum is to be calculated\n");
    scanf("%d", &n);
    for (int  i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
         sum+=pow(i,2);   
        }
        else
        {
            sum+=pow(i,3);
        }
        // sum = sume+sumo;
    }
    printf("%f", sum);
return 0;
}

// //2 
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     float a,b;
//     int sum;
//     printf("Enter the floating point numbers a and b\n")
//     scanf("%f %f", &a, &b);
//     sum = a+b;
//     printf("The sum of the the floating values %f and %f is %d\n", a, b, sum);
// }

//3 