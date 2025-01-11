#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
    char c;
    struct stack *prev;
} *top = NULL;
typedef struct stack st;
void push(char x);
char pop();
int check(char str[]);
void main(){
    char str [100];
    int a;
    printf("Enter an expression to verify: ");
    gets(str);
    a=check(str);
    if(a==1){
        printf("Invailed Expression.\n");
    }
    else{
        printf("Vailed Expression");
    }
}
void push(char x){
    st *p;
    p=(st*)malloc(sizeof(st));
    p->c=x;
    p->prev=top;
    top=p;
}
char pop(){
    st *p;
    p=top;
    top=top->prev;
    free(p);
    return p->c;
}
int check(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='[' || str[i]=='{' || str[i]=='('){
            push(str[i]);
        }
        else if(str[i]==']' || str[i]=='}' || str[i]==')'){
            if(top==NULL){
                return 1;
            }
            switch(str[i]){
                case ']':
                if(top->c!='['){
                    return 1;
                }
                pop();
                break;
                case '}':
                if(top->c!='{'){
                    return 1;
                }
                pop();
                break;
                case ')':
                if(top->c!='('){
                    return 1;
                }
                pop();
                break;
            }
        }
        i++;
    }
    if(top!=NULL){
        return 1;
    }
    else{
        return 0;
    }
}
