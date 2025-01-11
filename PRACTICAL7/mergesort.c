#include<stdio.h>
void merge(int arr[],int,int,int);
void merge_sort(int arr[],int,int);
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
    merge_sort(arr,0,n-1);
    printf("After sorting..\n");
    printarray(arr,n);
}
//merge that already sorted
void merge(int arr[],int beg,int mid,int end){
    int i=beg,j=mid+1,index=beg,temp[10];
    int k;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[index]=arr[i];
            i++;
        }
        else{
            temp[index]=arr[j];
            j++;
        }
        index++;
    }

    if(i>mid){
        while(j<=end){
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else{
        while(i<=mid){
            temp[index]=arr[i];
            i++;
            index++;
        }
    }
    for(k=beg;k<index;k++){
        arr[k]=temp[k];
    }
}
//merge sort
void merge_sort(int arr[],int beg,int end){
    if(beg<end){
        int mid=(beg+end)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}


