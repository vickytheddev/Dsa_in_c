#include<stdio.h>
#include<stdlib.h>
# define Maxsize 10
int queue[Maxsize];
int rear=-1,front=0;
void insert();
void Delete();
void display();
int main(){
    int choice;
        do{
        printf("----------Queue Menu----------\n");
        printf(" 1.Insert\n 2.Delete\n 3.display\n");
        printf("------------------------------\n");
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
    if(rear==Maxsize-1){
        printf("queue is overflow\n");
    }
    else{
        printf("enter a number:");
        scanf("%d",&num);
        rear++;
        queue[rear]=num;
    }
}
void Delete(){
    int val;
    if(front>rear){
        printf("queue is empty\n");
    }
    else{
        val= queue[front];
        front++; 
        printf("Deleted value is %d\n",val);
    }
}
void display(){
    if(front>rear){
        printf("queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("value is: %d\n",queue[i]);
        }
    }
}
