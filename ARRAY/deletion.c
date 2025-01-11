#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int i,num,flag=0;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value that you want to remove: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("value not found");
    }
    else{
        for(;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;
        for(i=0;i<n;i++){
           printf("%d",arr[i]);
        }
    }
}