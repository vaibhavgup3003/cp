#include<stdio.h>

int main(){
    int num;
    int reverse=0;
    int j;
    printf("Enter the number\n");   // 1 2 3 
    scanf("%d",&num);
    int x;
    x=num;
    
    while(num>0){   
        j=num%10;
        reverse=reverse*10 +num%10;
        num/=10;
    }
       
    printf(x==reverse?"Palindrome":"Not a palindrome");
     printf("\nAnant kumar tiwari\n211112230");
    return 0;
}