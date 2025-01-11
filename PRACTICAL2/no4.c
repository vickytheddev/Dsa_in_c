#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int i,j,k;
    int arr[n][n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                printf("Enter the value of arr[%d] [%d] [%d]",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}                         