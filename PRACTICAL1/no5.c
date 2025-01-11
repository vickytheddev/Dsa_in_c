#include<stdio.h>
int main(){
    int x=10;
    int y=20;
    int *p=&x;
    int *d=&y;
    int sum = (*p)+(*d);
    printf("Sum is %d",sum);
}