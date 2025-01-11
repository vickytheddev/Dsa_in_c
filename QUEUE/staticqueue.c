#include <stdio.h>
#include<stdlib.h>
#define n 10 
int queue[n];
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
    if(rear==n-1){
        printf("Queue is overflow\n");
    }
    else{
        printf("Enter number");
        scanf("%d",&num);
        rear++;
        queue[rear]=num;
    }
}
void Delete(){
    int val;
    if(front>rear){
        printf("Queue is empty\n");
    }
    else{
        val=queue[front];
        front++;
        printf("Deleted element is %d\n",val);
    }
}
void display(){
    if(front>rear){
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("value is %d\n",queue[i]);
        }
    }
}