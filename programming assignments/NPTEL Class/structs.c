// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// struct employee{
//     int code;
//     float salary;
//     char *name[10];
// };
// int main()
// {
//     struct employee e1;
//     e1.code = 100;
//     e1.salary = 19.38;
//     // e 1.name = "Vaibhav";
//     strcpy(e1.name, "Vaibhav");
//     printf("%d",e1.code);
//     printf("%d",e1.salary);
//     printf("%d",e1.name);

// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// struct employee{
//     int code;
//     float salary;
//     char * name[50];
// };
// int main()
// {
//    struct employee e1, e2, e3;
//     printf("Enter the value for code of e1: ");
//     scanf("%d", &e1.code);
//     printf("Enter the value for salary of e1: ");
//     scanf("%f", &e1.salary);
//     printf("Enter the value for name of e1: ");
//     scanf("%s", e1.name);

//     printf("Enter the value for code of e2: ");
//     scanf("%d", &e2.code);
//     printf("Enter the value for salary of e2: ");
//     scanf("%f", &e2.salary);
//     printf("Enter the value for name of e2: ");
//     scanf("%s", e2.name);

//     printf("Enter the value for code of e3: ");
//     scanf("%d", &e3.code);
//     printf("Enter the value for salary of e3: ");
//     scanf("%f", &e3.salary);
//     printf("Enter the value for name of e3: ");
//     scanf("%s", e3.name);

// return 0;
// }

/* arrays of structures*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
int main()
{
    // char facebook[100];
    struct employee facebook[100];
    facebook[1].code = 10;
    facebook[1].salary = 100.45;
    strcpy(facebook[1].name, "Vaibhav");
    facebook[2].salary = 500;
    facebook[2].code = 234;
    strcpy(facebook[2].name, "Pushti");

printf("%s", facebook[2].name);
return 0;
}