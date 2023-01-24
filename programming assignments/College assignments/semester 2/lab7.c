// //1 
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d\n", n<<2);
//     printf("%d\n", n>>2);
// }

// //2
// #include<stdio.h>
// int main()
// {
//     int a, b;
//      scanf("%d%d", &a, &b);
//      printf("%d\n", a&b);
//       printf("%d\n", a|b);
//       printf("%d\n", a^b);
//         printf("%d\n",~b);
        
//         printf("%d\n", a&&b);
//       printf("%d\n", a||b);
//         printf("%d\n", !b);
        
// }

// //3 
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d%d", &a, &b);
//     if(!(a^b))
//     {
//         printf("Equal\n");
//     }
//     else
//     {
//         printf("NOt Equal\n");
//     }
// }

// //4
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     for(int i = 0; i< num; i++)
//     {
//         if(num == pow(2,i))
//         {
//         printf("Entered number is a power of 2\n");
//          return 0;
//         }
       
//     }
// }

// //5
// #include<stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d * %d = %d\n", num, i, num*i);
//     }
// }





// // 6
// #include <stdio.h>

// int main()
// {
//   int a,b, sum = 0;
//   scanf("%d %d", &a, &b);
//   while(b--)
//   {
//       sum = sum + a;
//   }
//   printf("%d\n", sum);
// }




//7
#include<stdio.h>int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j =1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
    

