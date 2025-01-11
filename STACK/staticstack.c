#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
#define n 10 
int top=-1;
int a[n];
void push();
void display();
void pop();
void isEmpty();
void isfull();
void peek();
void change();
int main(){
    int choice;
    int a,b;
    do{
        printf("-------------------------Stack Menu-------------------------\n");
        printf(" 1.push\n 2.pop \n 3.display\n 4.isEmpty\n 5.isfull\n 6.peep\n 7.change\n 8.Exit\n");
        printf("------------------------------------------------------------\n");
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
            isEmpty();
            break;
        case 5:
            isfull();
            break;
        case 6:
            peek();
            break;
        case 7:
            printf("enter the index and number\n");
            scanf("%d %d",&a,&b);
            change(a,b);
            break;
        default :
         printf("thank you...\n");
        }
    }
    while (choice!=8);
}
void push(){
    if(top==n-1){
        printf("stack is overflow");
        exit(0);
    }
    else{
        top++;
        int num;
        printf("Enter a number:");
        scanf("%d",&num);
        a[top]=num;
        printf("push value is %d\n",num);
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty\n");
        exit(0);
    }
    else{
        int item;
        item=a[top];
        top--;
        printf("poped value is %d\n",item);
    }
}
void display(){
    if(top==-1){
        printf("stack is Empty\n");
        exit(0);
    }
    else{
        for(int i=top;i>=0;i--){
            printf("value is %d\n",a[i]);
        }
    }
}
void isEmpty(){
    if(top==-1){
        printf("stacl is Empty");
        exit(0);
    }
}
void isfull(){
    if(top==n-1){
        printf("stack is full");
        exit(0);
    }
}
void peek(){
    if(top==-1){
        printf("stack is overflow\n");
        exit(0);
    }
    else{
        printf("peek value is %d\n",a[top]);
    }
}
void change(int idx, int num){
    if (idx>=0 && idx<=top){
        a[idx] = num;
    }
    else{
        printf("enter vailed index\n");
    }
}