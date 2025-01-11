#include<stdio.h>
int main(){
    int arr[5]={2,4,6,2,6},i;
    int w= sizeof(int);
    unsigned int base = (unsigned int) arr;
    for(i=0;i<5;i++){
        printf("address of arr[%d] is %u\n",i,&arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("address of arr[%d] is %u\n",i,base+w*i);
    }
}