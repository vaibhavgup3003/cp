#include<stdio.h>

int main(){
    int num;int n1=0;
    int n2=1;
    int n3;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Displaying fibonacci series\n");
    
        printf("%d %d ",n1,n2);   //  0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
        for(int i=3;i<=num;i++){
            n3=n1+n2;
            printf("%d ",n3);
            n1=n2;
            n2=n3;
        }
         printf("\nAnant kumar tiwari\n211112230");
    return 0;
}