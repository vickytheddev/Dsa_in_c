#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
} *head;
typedef struct node st;
void binsert();
void einsert();
void display();
void bdelete();
void edelete();
int count();
int main(){
    int choice;
    do{   
        printf("--------------------linked list----------------------\n");
        printf("1.Insert At Begin\n2.Insert At End\n3.Delete at begin\n4.Delete at end\n5.Display\n6.Exit\n");
        printf("---------------------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            binsert();
            break;
        case 2:
            einsert();
            break;
        case 3:
            bdelete();
            break;

        case 4:
            edelete();
            break;

        case 5:
            display();
            break;
        case 6:
            printf(".....thank you.....\n");
            break;
        default:
            printf("please chose vailed choice\n");
        }
    } while (choice!=6);
}

void binsert(){
    st *New, *temp;
    New = (st *)malloc(sizeof(st));
    if (New == NULL){
        printf("Overflow\n");
    }
    else{
        printf("Enter the value: ");
        scanf("%d", &New->data);
        if (head == NULL){
            head = New;
            New->next = head;
        }
        else{
            temp = head;
            while (temp->next != head){
                temp = temp->next;
            }
            New->next = head;
            temp->next = New;
            head = New;
        }
    }
}

void einsert(){
    st *New, *temp;
    New = (st *)malloc(sizeof(st));
    if (New == NULL){
        printf("Overflow\n");
    }
    else{
        printf("Enter the value: ");
        scanf("%d", &New->data);
        if (head == NULL){
            head = New;
            New->next = head;
        }
        else{
            temp = head;
            while (temp->next != head){
                temp = temp->next;
            }
            New->next = head;
            temp->next = New;
        }
    }
}

void display(){
    st *temp;
    temp = head;
    if (temp == NULL){
        printf("Underflow\n");
    }
    else{
        printf("Values are: ");
        while (temp->next != head){
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
        printf("\n");
    }
}

void bdelete(){
    st *temp;
    temp = head;
    if (temp == NULL){
        printf("Underflow\n");
    }
    else{
        if (temp->next == head){
            printf("Deleted data= %d\n", temp->data);
            free(temp);
            head = NULL;
        }
        else{
            while (temp->next != head){
                temp = temp->next;
            }
            temp->next = head->next;
            printf("Deleted data= %d\n", head->data);
            free(head);
            head = temp->next;
        }
    }
}

void edelete(){
    st *temp, *prev;
    temp = head;
    if (temp == NULL){
        printf("Underflow\n");
    }
    else{
        while (temp->next != head){
            prev = temp;
            temp = temp->next;
        }
        if (temp == head){
            head = NULL;
        }
        else{
            prev->next = temp->next;
        }
        printf("Deleted data= %d\n", temp->data);
        free(temp);
    }
}
