#include <stdio.h>  
int partition (int arr[], int start, int end)  {
    int pivot = arr[end];
    int i = (start - 1);  
    for (int j = start; j < end; j++)  {  
        if (arr[j] < pivot)  {  
            i++;
            int temp = arr[i];  
            arr[i] = arr[j];  
            arr[j] = temp;  
        }  
    }  
    int temp = arr[i+1];  
    arr[i+1] = arr[end];  
    arr[end] = temp;  
    return (i + 1);  
}  
void quick(int arr[], int start, int end){  
    if (start < end)  {  
        int p = partition(arr, start, end);
        quick(arr, start, p - 1);  
        quick(arr, p + 1, end);  
    }  
}  
void printArr(int arr[], int n){  
    int i;  
    for (i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}  
int main()  {  
     int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Before sorting...\n");  
    printArr(arr, n);  
    quick(arr, 0, n - 1);  
    printf("After sorting...\n");    
    printArr(arr, n);  
    return 0;  
}  


