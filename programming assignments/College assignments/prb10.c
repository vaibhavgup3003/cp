#include<stdio.h>
int hcf(int a,int b){
    
      while(b!=0){
          int t;
        t=a%b;
        a=b;
        b=t;
    }
    return a;
    
    }

int main(){

    int num1=98,num2=56;
    int LCM;
    printf("Enter the value of num1 and num2\n");
    scanf("%d %d",&num1,&num2);
    int c=hcf(num1,num2);
    printf("The HCF of %d and %d is: %d\n",num1,num2,c); 

    LCM=(num1*num2)/c; 
    printf("The LCM of %d and %d is: %d",num1,num2,LCM);
     printf("\nAnant kumar tiwari\n211112230");

    return 0;
}