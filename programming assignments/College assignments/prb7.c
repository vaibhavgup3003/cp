#include<stdio.h>
#include<math.h>

int main(){
    int sum=0;int num;int x,y;int j,k;int digits=0;
    printf("Enter the number\n");
    scanf("%d",&num);  // 1 2 3
    x=num;
    y=x;
    while(num!=0){
        j=num%10;
        num/=10;
        ++digits;

    }
    printf("No of digits are %d\n",digits);
  
    while(x!=0){
        k=x%10;
        sum+=pow(k,digits);           // 1 2 3
        x/=10;
    }
    printf("Armstrong sum:  %d\n",sum);

    
    int Armstrong_num= sum;
    printf(y==Armstrong_num?"The entered number is Armstrong number":"The entered number is not a Armstrong number");
     printf("\nAnant kumar tiwari\n211112230");
    return 0;
}