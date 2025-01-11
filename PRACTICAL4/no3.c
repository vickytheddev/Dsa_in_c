#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct stack{
    char ch;
    struct stack *prev;
} *top = NULL;
typedef struct stack st;
void push(char c){
    st *p;
    p = (st *)malloc(sizeof(st));
    p->ch = c;
    p->prev = top;
    top = p;
}
char pop(){
    st *p;
    p = top;
    top = top->prev;
    return p->ch;
}
int priority(char x){
    if (x == '^'){
        return 3;
    }
    else if (x == '/' || x == '*'){
        return 2;
    }
    else if (x == '+' || x == '-'){
        return 1;
    }
    else{
        return -1;
    }
}
void ans(char x[]){
    int i = 0, j = 0;
    char z, y[100];
    push('(');
    strcat(x, ")");
    while (x[i] != '\0'){
        if (isalpha(x[i])){
            y[j] = x[i];
            j++;
        }
        else if (x[i] == '('){
            push(x[i]);
        }
        else if (x[i] == ')'){
            while ((z = pop()) != '('){
                y[j] = z;
                j++;
            }
        }
        else{
            while (priority(top->ch) >= priority(x[i])){
                y[j] = pop();
                j++;
            }
            push(x[i]);
        }
        i++;
    }

    y[j] = '\0';
    printf("\nPostfix expression is: %s", y);
}

void main(){
    char x[100];
    printf("Enter infix expression: ");
    gets(x);
    ans(x);
}