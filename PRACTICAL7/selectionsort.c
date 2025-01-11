#include<stdio.h>
#include<limits.h>
void selection(int arr[],int n){
    int i,j,min,temp;
    for(i=0;i<n;i++){
        int min = INT_MAX;
        int minidx = -1; 
        for(j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        }
        temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
}
void printarray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Before sorting..\n");
    printarray(arr,n);
    selection(arr,n);
    printf("After sorting..\n");
    printarray(arr,n);
}