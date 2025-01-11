 #include<stdio.h>
void Insertion(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n-1;i++){
        int j=i;
        while(arr[j]<arr[j-1] && j>=1){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;  
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
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
    Insertion(arr,n);
    printf("After sorting..\n");
    printarray(arr,n);
}