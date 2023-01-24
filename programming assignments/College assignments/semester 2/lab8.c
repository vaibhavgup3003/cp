// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {

//     int a=3, b=4;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     printf("%d %d\n", *ptr1, *ptr2);
//     *ptr1 = b;
//     *ptr2 = a;
//     printf("%d %d", *ptr1, *ptr2);

// return 0;
// }

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n, rem = 0, pv = 0,bin=0;
    scanf("%d", &n);
    while (n!=0)
    {
        n%2;
        n/2;
        pv++;
        bin = bin + pv*10+rem;
    }
    printf("%d",bin);
return 0;
}