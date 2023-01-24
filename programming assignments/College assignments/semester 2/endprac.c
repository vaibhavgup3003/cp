// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     int a, b;
//     int t;
//     scanf("%d %d", &a, &b);
//     if (b > a)
//     printf("before swap: a= %d, b= %d\n",a,b);
//         {
//         t = a;
//         a = b;
//         b = t;
//     }
//     printf("after swap: a= %d, b= %d\n",a,b);

//     while (b!=0)
//     {
//         t = a;
//         a = b;
//         b = t % b;
//     }
//     printf("%d\n", a);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     int num,x;
//     scanf("%d %d",&x, &num);
//     int count=0;
//     int a;
//     while(num==0)
//     {
//     a= num%10;
//     num=num/10;
//     if(a==x)
//     {
//     count = count + 1;
//     }
//     }
//     printf("%d", count);
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     int num;
//     int rem;
//     int sum=0;
//     scanf("%d", &num);
//     while(num != 0)
//     {
//        rem = num% 10;
//        sum = sum + rem;
//        num = num /10;
//     }
//     printf("%d", sum);
// return 0;
// }

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int digits(int num)
{
int count = 0;
while(num)
    {
    num = num/10;
    count++;
    }
return count;
}
int main()
{
    int num;
    int sum = 0;
    int rem = 0;
    int a;
    a = num;
    scanf("%d", &num);
    
    printf("%d",digits(num));
    while (a!=0)
    {
        rem = a%10;
        sum = sum + pow(rem,digits(num));
        a =a/10;
    }
    if (sum == num)
    {
        printf("%d", sum);
    }
    
    return 0;
}