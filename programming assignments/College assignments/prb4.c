#include<stdio.h>

int main(){
    int a;
    int poscount=0;int negcount=0;int zerocount=0;
    printf("how many numbers you want to enter\n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        }
    for(int j=0;j<a;j++){
        if(arr[j]>0){
            poscount++;
        }
        else if(arr[j]<0){
            negcount++;
        }
        else{
            zerocount++;
        }

    }
    printf("positive: %d\n",poscount);
    printf("negative: %d\n",negcount);
    printf("zero %d\n",zerocount);

    return 0;
}