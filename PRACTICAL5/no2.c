#include<stdio.h>
#include<stdlib.h>
# define Maxsize 10
int cqueue[Maxsize];
int rear=-1,front=-1;
void insert();
void Delete();
void display();
int main(){
    int choice;
        do{
        printf("----------Circlur Queue Menu----------\n");
        printf(" 1.Insert\n 2.Delete\n 3.display\n");
        printf("--------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            display();
            break;
        default :
         printf("Enter vailed number\n");
        }
    }       
    while (choice!=3);
} 
void insert(){
    int num;
    if((rear+1)%Maxsize==front){
        printf("queue is overflow\n");
    }
    else{
        printf("Enter a number: ");
        scanf("%d",&num);
        if(rear==-1&&front==-1){
            rear=0;
            front=0;
        }
        else{
            rear=(rear+1)%Maxsize;
        }
        cqueue[rear]=num;
    }
}
void Delete(){
    if(rear==-1&&front==-1){
        printf("queue is empty\n");
    }
    else{
        int n=cqueue[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front =(front+1)%Maxsize;
        }
        printf("deleted element is: %d\n",n);
    }
}
void display(){
    int i;
    if(rear==-1&&front==-1){
        printf("queue is empty\n");
    }
    else{
        for(i=front;i!=rear;i=(i+1)%Maxsize){
            printf("Element is %d\n",cqueue[i]);
        }
        printf("Element is %d",cqueue[i]);
    }
}

