#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={2,4,5,6,7,3,1};
    int x=6;
    int index=0;
    int flag=0;
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            flag=1;
            break;
        }
        index++;
    }
    if(flag==1){
        printf("%d is present in the array and its index is %d",x,index);
    }
    else{
        printf("%d is not present in the array");
    }
    return 0;
}