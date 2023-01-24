// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// int find_nth_term(int n, int a, int b, int c) {

//      return((n==1)?(a):(n==2)?(b):(n==3)?c:(find_nth_term(n-1, a,b,c))+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c));

//     if(n==1){
//     return a;}
//     else if (n==2)
//     {
//         return b;
//     }
//     else if (n==3)
//     {
//         return c;
//     }
//     else{
//         return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
//     }

// }

// int main() {
//     int n, a, b, c;

//     scanf("%d", &n);
//     // int ans = find_nth_term(n);
//     scanf("%d%d%d", &a, &b, &c);
//     printf("%d",find_nth_term(n,a,b,c));
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[1000];
    char *ptr = str;

    fgets(str, 20, stdin);
    while (*ptr != '  ')
    {
       printf("%s", str);
       while (*ptr == ' ')
       {
           printf("\n");
       }
    }
}