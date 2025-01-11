#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i,beg=0,end=n-1,mid,key,flag =0;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("Enter number that you want to search: ");
    scanf("%d",&key);
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]==key){
            printf("%d is present in the array at position = %d",key,mid);
            flag =1;
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if((beg>end)&&(flag==0)){
        printf("%d is not present in the array",key);
    }
}