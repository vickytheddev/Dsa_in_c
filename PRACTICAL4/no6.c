#include <stdio.h>
void TOH(int n, char X, char Y, char Z){
    if (n == 1){
        printf("%c - %c\n", X, Z);
    }
    else{
        TOH(n - 1, X, Z, Y);
        TOH(1, X, Y, Z);
        TOH(n - 1, Y, X, Z);
    }
}
void main(){
    int n;
    printf("Enter number of disc: ");
    scanf("%d", &n);
    if (n >= 1){
        printf("Tower of Hanoi for %d disc:\n", n);
        TOH(n, 'X', 'Y', 'Z');
    }
    else{
        printf("Not possible");
    }
}