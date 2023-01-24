#include<stdio.h>
int main(){
    int n;
    int arr[20];
    for(int i=0;i<20;i++){
        arr[i]=i+1;
    }
     printf("Enter the system number\n");
     scanf("%d", &n);
    if(n<=20){

     if((arr[n-1]-1)%3==0){
         printf("This system is working\n");
     }
     else{printf("This system is not working\n");}}
     else{
         printf("No of system is only 20:  Invalid input\n");
     }
    return 0;
} 