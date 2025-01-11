#include<stdio.h>
#include<stdbool.h>
void bubble(int arr[],int n){
    int i,j,temp;
    for(i = 0; i < n; i++){    
      for(j = i+1; j < n; j++){    
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }     
        }     
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
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
    bubble(arr,n);
    printf("after sorting..\n");
    printarray(arr,n);
}  