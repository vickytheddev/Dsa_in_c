#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int position,i,num;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("original array\n");
    for(i=0;i<n;i++){
        printf("%d\t\n",arr[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&position);
    printf("Enter the value that you want to insert: ");
    scanf("%d",&num);
    for(i=n;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=num;
    n++;
    printf("Array after insertion\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}