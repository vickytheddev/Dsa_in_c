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
    printf("Enter the position: ");
    scanf("%d",&position);
    printf("Enter the value that you want to update: ");
    scanf("%d",&num);
    printf("Array before update.....\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    arr[position-1]=num;
    printf("Array after update......\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}