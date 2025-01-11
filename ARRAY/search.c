#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,x;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value that you vant to search:");
    scanf("%d",&x);
    int index=0;
    int flag=0;
    for(int i=0;i<n;i++){
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