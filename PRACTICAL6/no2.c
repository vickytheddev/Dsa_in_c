#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};struct node*ptr,*temp;
struct node *head;
void beginsert();
void lastinsert();
void begin_delete();
void last_delete();
void display();
void main(){
    int choice;
   do{
        printf("---------------linked list---------------\n");
        printf(" 1.Insert in begining\n 2.Insert at last\n 3.Delete from Beginning\n 4.Delete from last\n 5.Display\n 6.Exit\n");
        printf("-----------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            begin_delete();
            break;
        case 4:
            last_delete();
            break;
        case 5:
            display();
            break;
        case 6:
            printf(".....Thank you.....");
            break;
        default:
            printf("Invailed choice");
        }
    }while(choice!=6);
}
void beginsert(){
    int n;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL){
        printf("list is overflow\n");
    }
    else{
        printf("Enter the node data: ");
        scanf("%d", &n);
        ptr->data = n;
        if (head == NULL){
            head = ptr;
            ptr->next = head;
        }
        else{
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
        printf("\nnode inserted\n");
    }
}
void lastinsert(){
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL){
        printf("\nOVERFLOW\n");
    }
    else{
        printf("\nEnter the node data: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL){
            head = ptr;
            ptr->next = head;
        }
        else{
            temp = head;
            while (temp->next != head){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }
        printf("\nnode inserted\n");
    }
}
void begin_delete(){
    struct node *ptr;
    if (head == NULL){
        printf("\nUNDERFLOW");
    }
    else if (head->next == head){
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }

    else{
        ptr = head;
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\nnode deleted\n");
    }
}
void last_delete(){
    struct node *ptr, *preptr;
    if (head == NULL){
        printf("\nUNDERFLOW");
    }
    else if (head->next == head){
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else{
        ptr = head;
        while (ptr->next != head){
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        printf("\nnode deleted\n");
    }
}

void display(){
    struct node *ptr;
    ptr = head;
    if (head == NULL){
        printf("\nnothing to print");
    }
    else{
        printf("\n printing values ... \n");

        while (ptr->next != head){
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n", ptr->data);
    }
}
