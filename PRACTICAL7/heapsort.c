#include <stdio.h>     
void heapify(int a[], int n, int i)  {  
    int largest = i;  
    int left = 2 * i;  
    int right = 2 * i+1;    
    if (left < n && a[left] > a[largest]){  
        largest = left;
    }    
    if (right < n && a[right] > a[largest]){  
        largest = right;
    }    
    if (largest != i) {    
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heapify(a, n, largest);  
    }   
}    
void heapSort(int a[], int n){  
    for (int i = n / 2 ; i >= 0; i--){
        heapify(a, n, i);
    }    
    for (int i = n - 1; i >= 0; i--) {    
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
        heapify(a, i, 0);  
    } 
}    
void printArr(int arr[], int n){  
    for (int i = 0; i < n; i++){  
        printf("%d\n", arr[i]);    
    }  
} 
int main(){  
   int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Before sorting..\n");
    printArr(a,n);
    heapSort(a,n);
    printf("after sorting..\n");
    printArr(a,n);  
}  