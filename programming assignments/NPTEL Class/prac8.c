// #include <stdio.h>
// #include<string.h>
// int starlen(char *str)
// {
//     int count = 0;
//     char *ptr = str;
//     while (*ptr != '\0')
//     {
//         ptr++;
//         count = count + 1;
//     }
//     return count;
// }
// int main()
// {
//     char str[] = "VaibhavGupta";
//     printf("%d", starlen(str));
//     return 0;
// }

// #include<stdio.h>
// void slice(char *st, int m, int n)
// {
//     int i=0;
//     char *ptr = st;
//     while (m+i<n)
//     {
//         st[i] = st [i + m];
//         i++;
//     }
//     st[i]= '\0';
    
// }
// int main()
// {
//     char st[] = "Vaibhav";
//     slice(st, 2, 5);
//     printf("%s", st );
// return 0;
// }
// #include<stdio.h>
// void encrypt( char *c)
// { 
//     char *ptr = c;
//     while(*ptr!='\0')
//     {
//         *ptr = *ptr +1;
//         ptr++;
//     }
// }
// int main()
// {
//     char c[]= {"My name is Vaibhav Gupta "};
//     encrypt(c);
//     printf("%s", c);
// }

// #include<stdio.h>
// void decrypt( char *c)
// { 
//     char *ptr = c;
//     while(*ptr!='\0')
//     {
//         *ptr = *ptr +1;
//         ptr++;
//     }
// }
// int main()
// {
//     char c[]= {"Nz!obnf!jt!Wbjcibw!Hvqub!"};
//     decrypt(c);
//     printf("%s", c);
// }

#include<stdio.h>
int main()
{
    char c[] = {"mmvy"};
    int count = 0;
    char *ptr = c;
    while (*ptr == 'm')
    {

        count = count +1;
        ptr++;
    }
    printf("%d", count);
    
return 0;
}