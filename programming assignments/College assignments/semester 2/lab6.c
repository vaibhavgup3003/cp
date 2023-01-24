// // #include <stdio.h>
// // #include <string.h>
// // #include <stdlib.h>
// // #include <time.h>
// // /* AIM   : REVERSE A STRING USING POINTERS
// // DATE     :
// // AUTHOR   :PRATHAM PALI
// // */
// // int main()
// // {
// //     int n;
// //     scanf("%d", &n);
// //     char s[n];
// //     printf("String : \n");
// //     scanf("%s", &s);
// //     char *temp;
// //     for (int i = 0; i < n / 2; i++)
// //     {
// //         *temp = s[i];
// //         s[i] = s[n-i-1];
// //         *temp = s[n-i-1];
// //         // printf("%u", *temp);
// //         // *(s + i) = *(s + n - i - 2);
// //         // *(s + n - i - 2) = *temp;
// //     printf("%u", *temp);
// //     }
// //     // printf("Pratham Pali\n21112254");
// //     return 0;
// // }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     char str[] = {"123456789"};
//     char *ptr = str;
//     int len;
//     len = strlen(str);
//     char temp;
//     printf("%c\n", ptr[1] );
//     for (int  i = 0; i <= len/2; i++)
//     {
//         // printf("%c", *ptr+i);
//        temp = ptr[len-i-1];
//         ptr[len-i-1] = ptr[i];
//         ptr[i] = temp;
//     }

//     printf("%s", str);
// return 0;
// }

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
char strrev(char str[])
{
    int len;
    len = strlen(str);
    for (int i = len-1; i >= 0; i--)
    {
        str[i];
        return str[i];
    }
}

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    strrev(str);
    return 0;
}