#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack{
    int no;
    struct stack *prev;
}*top= NULL;
typedef struct stack st;
st *p;
void push();      
int pop();
void display();
void change();
void peek();
void main(){
    int choice;
    do{
        printf("----------Stack Menu----------\n");
        printf(" 1.push\n 2.pop\n 3.display\n 4.change\n 5.peek\n 6.Exit\n");
        printf("------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            change();
            break;
        case 5:
            peek();
            break;
        default :
         printf("thank you...\n");
        }
    }
    while (choice!=6);
}
void push(){
    p=(st*)malloc(sizeof(st));
    printf("Enter the value that you want to insert\n");
    scanf("%d",&p->no);
    p->prev=top;
    top=p;
}
void display(){
    p=top;
    if(p==NULL){
        printf("Stack is empty\n");
    }
    while(p!=NULL){
        printf("%d\n",p->no);
        p=p->prev;                        //because display
    }
}
int pop(){
    if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        p=top;
        top=top->prev;                     //because delete
        free(p);
    }
    return p->no;
}
void change(){
    p=top;
    int x,y;
    printf("Enter the position and value\n");
    scanf("%d %d",&x,&y);
    int count =0;
    while(count<x){
        p=p->prev;
        if(p==NULL){
            printf("enter valid possition\n");
        }
        count++;
    }
    p->no=y;
}
void peek(){
    p=top;
    if(p==NULL){
        printf("stack is empty\n");
    }else{
        printf("peek value is %d\n",p->no);
    }
}





