#include <stdio.h>
int fib(int n);
void main(){
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    printf("\n%d Fibonacci numbers are: \n", n);
    for (int i = 0; i <= n-1; i++){
        printf(" %d ", fib(i));
    }
}
int fib(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }
}