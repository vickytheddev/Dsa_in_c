#include<stdio.h>

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i,j,flag=0,gapsize,temp;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("before sorting...\n");
    printarray(arr,n);
    gapsize = n;
    while(flag==1 || gapsize>1){
        flag=0;
        gapsize=(gapsize+1)/2;
        for(i=0;i<(n-gapsize);i++){
            if(arr[i+gapsize]<arr[i]){
                temp=arr[i+gapsize];
                arr[i+gapsize]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("after sorting...\n");
    printarray(arr,n);
}