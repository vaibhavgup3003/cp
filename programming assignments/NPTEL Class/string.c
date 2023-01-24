// #include<stdio.h>
// int main()
// {
// char str[]= "Vaibhav";
// char *ptr = str;
// while (*ptr!='\0')
// {
//    printf("%c", *ptr);
//    ptr++;
// }

// printf("%s", str);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// char s[10];  /* size of array is mandatory to define*/
// printf("%s", s); /* here & is not used*/
// scanf("%s", s); /*cannot input string with spaces*/
// return 0;
// }

// gets() and puts() function
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
/*char* fgets(char* str, int n, FILE* stream);*/
// char *ptr = "Vaibhav";
// char ptr = "Vaibhav";
/* if a string is initallised without pointer then it cannot be reinitiallised but with pointer it can be reinitiallised
like */
// ptr = "mradul";
// printf("%s", ptr);
// char s[50];
// fgets(s, 50, stdin);
// puts(s);
// printf("%s",s);
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char *st = "Vaibhav";
//     int a = strlen(st); /* strlen is a function in string.h library which tells the length of the string excluding null character*/
//     printf("length of string is %d", a);
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){

// char *s = "Vaibhav";
// char st[50];
// strcpy(st, s);
// printf("now the st is %s", st);
// return 0;

// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// char ch;
// char s[100];
// char sen[100];
// char *ptr = sen;
// scanf("%c", &ch);
// printf("%c\n", ch);
// scanf("%s", s);
// printf("%s", s);
// fgets(sen, 100, stdin);
// puts(sen);
// }

