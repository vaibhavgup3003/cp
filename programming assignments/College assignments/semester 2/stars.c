// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows-i; j > 0; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k<=2*i-1; k++)
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows-i; j > 0; j--)
//         {
//             printf(" ");
//         }
//          for (int k = 1; k<=2*i-1, k<=5; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//          for (int k = 2*i-1; k>=1; k++)
//         {
//             printf("*");
//         }
//     }
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     int row=5;
//     for (int i = 1; i <= row; i++)
//     {
//         printf("1");
//     }
    
//     return 0;
// }

#include<stdio.h>

int main()
{
 int n;
 int count=0;
 int j;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
 for(j=0;j<i;j++){
  if(a[i]==a[j])
  break;
 }
 if(i==j)
 count++;
}
printf("\nThe number of repeated elements in the array is: %d\n",n-count);
}