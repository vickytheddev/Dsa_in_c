#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
struct stack{
    char ch;
    struct stack *prev;
} *top = NULL;
typedef struct stack st;
void push(char x);
char pop();
int check(char[]);
void main(){
    char str[100];
    int x;
    printf("Enter a string:");
    gets(str);
    x = check(str);
    if (x == 1){
        printf("string follow wcwR\n");
    }
    else{
        printf("string do not follow wcwR\n");
    }
}
int check(char str[]){
    int i = 0;
    char x;
    while (str[i] != 'c'){
        push(str[i]);
        i++;
    }
    i++;
    while (str[i] != '\0'){
        x = pop();
        if (x!=str[i]){
            return 0;
        }
        i++;
    }
    if (top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void push(char x){
    st *p;
    p = (st *)malloc(sizeof(st));
    p->ch = x;
    p->prev = top;
    top = p;
}
char pop(){
    st *p;
    p = top;
    top = top->prev;
    return p->ch;
}