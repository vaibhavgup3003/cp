// //2
// #include<stdio.h>
// #include<math.h>

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<6;j++){
          
//             printf("%.lf ", pow(2+i,j));
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //3
#include<stdio.h>

int main(){
    int a=65;
    for(a;a<=90;a++){printf("%c ",a);}
    return 0;
}

// //4
// #include<stdio.h>

// int main(){
//     int a;
//     int poscount=0;int negcount=0;int zerocount=0;
//     printf("how many numbers you want to enter\n");
//     scanf("%d",&a);
//     int arr[a];
//     for(int i=0;i<a;i++){
//         scanf("%d",&arr[i]);
//         }
//     for(int j=0;j<a;j++){
//         if(arr[j]>0){
//             poscount++;
//         }
//         else if(arr[j]<0){
//             negcount++;
//         }
//         else{
//             zerocount++;
//         }

//     }
//     printf("positive: %d\n",poscount);
//     printf("negative: %d\n",negcount);
//     printf("zero %d\n",zerocount);

//     return 0;
// }

// //5
// #include<stdio.h>  
//  int main()    
// {    
// int num;
// int j;    
// int sum=0;
// printf("Enter the number\n");    
// scanf("%d",&num);    
// while(num!=0)    
// {          
//     j=num%10;    
//     sum=sum+j;    
//     num=num/10;    
// }    
// printf("Sum of digits of number is %d\n",sum);    
// return 0;  
// }  

// //6
// #include<stdio.h>
// int main(){
//     int num;
//     int reverse=0;
//     int j;
//     printf("Enter the number\n");   // 1 2 3 
//     scanf("%d",&num);
//     int x;
//     x=num;
    
//     while(num>0){   
//         j=num%10;
//         reverse=reverse*10 +num%10;
//         num/=10;
//     }
//     printf(x==reverse?"Palindrome":"Not a palindrome");
//     return 0;
// }

// //7
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int sum=0;int num;int x,y;int j,k;int digits=0;
//     printf("Enter the number\n");
//     scanf("%d",&num);  // 1 2 3
//     x=num;
//     y=x;
//     while(num!=0){
//         j=num%10;
//         num/=10;
//         ++digits;
//     }
//     printf("No of digits are %d\n",digits);
  
//     while(x!=0){
//         k=x%10;
//         sum+=pow(k,digits);           // 1 2 3
//         x/=10;
//     }
//     printf("Armstrong sum:  %d\n",sum);
//     int Armstrong_num= sum;
//     printf(y==Armstrong_num?"The entered number is Armstrong number":"The entered number is not a Armstrong number");    return 0;
// }

// //8
// #include<stdio.h>
// int main(){
//     int num;int n1=0;
//     int n2=1;
//     int n3;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     printf("Displaying fibonacci series\n");
    
//         printf("%d %d ",n1,n2);   //  0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
//         for(int i=3;i<=num;i++){
//             n3=n1+n2;
//             printf("%d ",n3);
//             n1=n2;
//             n2=n3;
//         }
//             return 0;
// }

// //9
// #include<stdio.h>
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<5;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//         return 0;
// }

// //10
// #include<stdio.h>
// int hcf(int a,int b){
    
//       while(b!=0){
//           int t;
//         t=a%b;
//         a=b;
//         b=t;
//     }
//     return a;
//     }
// int main(){
//     int num1=98,num2=56;
//     int LCM;
//     printf("Enter the value of num1 and num2\n");
//     scanf("%d %d",&num1,&num2);
//     int c=hcf(num1,num2);
//     printf("The HCF of %d and %d is: %d\n",num1,num2,c); 

//     LCM=(num1*num2)/c; 
//     printf("The LCM of %d and %d is: %d",num1,num2,LCM);
//     return 0;
// }
