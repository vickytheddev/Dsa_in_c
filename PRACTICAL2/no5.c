#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the size of row:");
    scanf("%d",&n);
    printf("Enter the size of column:");
    scanf("%d",&m);
    int arr[n][m],i,j;
    int k=4;
    int count=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]==k){
                printf("value is located at (%d,%d);\n",i,j);
                count++;
            }
        }
    }
    if(count == 0){
        printf("value is not present");
    }
}