// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("Enter the size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         printf("Enter the vallue of arr[%d]",i);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("Maximum value is %d",max);
// }



// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("Enter the size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     int min = INT_MAX;
//     for(int i=0;i<n;i++){
//         printf("Enter the vallue of arr[%d]",i);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     printf("Minimum value is %d",min);
// }



#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum is %d\n",sum);
    avg=(float)sum/2;
    printf("averrage is %f",avg);
}