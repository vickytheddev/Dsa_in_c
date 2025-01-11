#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <ctype.h>
struct stack{
    struct stack *prev;
    float n;
} *top = NULL;
typedef struct stack st;

void push(float x){
    st *p;
    p = (st *)malloc(sizeof(st));
    p->n = x;
    p->prev = top;
    top = p;
}
float pop(){
    st *p;
    p = top;
    top = top->prev;
    return p->n;
}
float answer(char ex[], float v[]){
    int i = 0;
    float ans;
    float x, y;
    while (ex[i] != '\0'){
        if (isalpha(ex[i])){
            push(v[i]);
        }
        else{
            switch (ex[i]){
            case '+':
                x = pop();
                y = pop();
                ans = y + x;
                break;

            case '-':
                x = pop();
                y = pop();
                ans = y - x;
                break;

            case '*':
                x = pop();
                y = pop();
                ans = y * x;
                break;

            case '/':
                x = pop();
                y = pop();
                ans = y / x;
                break;

            case '^':
                x = pop();
                y = pop();
                ans = pow(y, x);
                break;
            }
            push(ans);
        }
        i++;
    }
    return ans;
}
int main(){
    char ex[20];
    float v[20];
    int i = 0;
    float a;
    printf("Enter an expression to evaluate: ");
    gets(ex);
    while (ex[i] != '\0'){
        if (isalpha(ex[i])){
            printf("\nEnter value for %c: ", ex[i]);
            scanf("%f", &v[i]);
        }
        i++;
    }
    a = answer(ex, v);
    printf("\nThe value is: %f", a);
    return 0;
}