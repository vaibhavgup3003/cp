
#include<stdio.h>  
 int main()    
{    
int num;
int j;    
int sum=0;
printf("Enter the number\n");    
scanf("%d",&num);    
while(num!=0)    
{          
    j=num%10;    
    sum=sum+j;    
    num=num/10;    
}    
printf("Sum of digits of number is %d\n",sum);    
 printf("Anant kumar tiwari\n211112230");
return 0;  
}   