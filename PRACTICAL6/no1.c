#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *address;
};typedef struct node st;
st * start=NULL,*temp,*New,*prev,*next;

void create();
void Display();
void startinsert();   
void endinsert();  
void randominsert();  
void startdelete();  
void enddelete();  
void randomdelete();
void countnode();
void search();
int main(){
    int choice;
    do{
        printf("------------------------linked list-------------------------\n");
        printf(" 1.Create\n 2.Display\n 3.Insert in first\n 4.Insert at last\n 5.Insert at any random location\n 6.Delete from first\n 7.Delete from last\n 8.Delete node at any random location\n 9.countnode\n 10.search\n 11.Exit\n");
        printf("------------------------------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            create();
            break;
        case 2:
            Display();
            break;
        case 3:
            startinsert();
            break;
        case 4:
            endinsert();
            break;
        case 5:
            randominsert();
            break;
        case 6:
            startdelete();
            break;
        case 7:
            enddelete();
            break;
        case 8:
            randomdelete();
            break;
        case 9:
            countnode();
            break;
        case 10:
            search();
            break;
        case 11:
            printf("......Thank you......");
            break;
        default:
            printf("Please enter valid choice\n");
        }
    } while (choice!=11);
}
void create(){
    int n;
    char ch;
    printf("Enter element that you want to inseret: ");
    scanf("%d",&n);
    start=(st*) malloc(sizeof(st));
    start->data=n;
    start->address=NULL;
    temp=start;
    printf("Do you want to continue.\n");
    ch =getch();
    while(ch=='y'||ch=='Y'){
        printf("Enter element that you want to insert: ");
        scanf("%d",&n);  
        New=(st*) malloc(sizeof( st));
        New->data=n;
        New->address=NULL;
        temp->address=New;
        temp=temp->address;
        printf("Do you want to continue.\n");
        ch =getch();
    }
}

void Display(){
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        temp=start;
        while (temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->address;
        }
    }
}

void startinsert(){
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        int n;
        printf("Enter the number that you want to inserte: ");
        scanf("%d",&n);
        New=(st*)malloc(sizeof(st*));
        New->data=n;
        New->address=start;
        start=New;
    }
}

void endinsert(){
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        int n;
        printf("Enter the number that you want to insert: ");
        scanf("%d",&n);
        New=(st*)malloc(sizeof(st*));
        New->data=n;
        New->address=NULL;
        temp=start;
        while(temp->address!=NULL){
            temp=temp->address;
        }
        temp->address=New;
    }
}

void randominsert(){
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        int n,pos;
        printf("Enter the number that you want to insert: ");
        scanf("%d",&n);
        New=(st*)malloc(sizeof(st*));
        New->data=n;
        New->address=NULL;
        printf("Enter the position: ");
        scanf("%d",&pos);
        int i=1;
        next=start;
        while(i<pos){
            prev=next;
            next=next->address;
            i++;
        }
        prev->address=New;
        New->address=next;
    }
}

void startdelete(){
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        temp =start;
        start=start->address;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }
}

void enddelete(){
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        temp=start;
        while(temp->address!=NULL){
            prev=temp;
            temp=temp->address;
        } 
        prev->address=NULL;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }
}

void randomdelete(){
    int pos;
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        printf("Enter the possition: ");
        scanf("%d",&pos);
        temp=start;
        int i=1;
        while(i<pos){
            prev=temp;
            temp=temp->address;
            i++;
        }
        next=temp->address;
        prev->address=next;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }
}

void countnode(){
    int count=0;
    temp=start;
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        while(temp!=NULL){
            count++;
            temp=temp->address;
        }
        printf("Total node is %d",count);
    }
}

void search(){
    int s,flag=0;
    if(start==NULL){
        printf("list not found\n");
    }
    else{
        printf("Enter an element for search: ");
        scanf("%d",&s);
        temp=start;
        while(temp!=NULL){
            if(temp->data==s){
                flag =1;
                break;
            }
            temp=temp->address;
        }
        if(flag==1){
            printf("searching success\n");
        }
        else{
            printf("Element not found\n");
        }
    }
}