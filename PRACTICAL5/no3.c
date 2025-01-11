#include <stdio.h>
#include <stdlib.h>
#define s 5
int q[s], f = -1, r = -1;
void finsert();
void rinsert();
void fdelete();
void rdelete();
void display();
int main(){
  int x;
  do{
    printf("\n1.Insert from front\n2.Insert from rear\n3.Delete from front\n4.Delete from rear\n5.Display\n");
    scanf("%d", &x);
    switch (x){
    case 1:
      finsert();
      break;
    case 2:
      rinsert();
      break;
    case 3:
      fdelete();
      break;
    case 4:
      rdelete();
      break;
    case 5:
      display();
      break;
    default:
      printf("Invalid choice");
    }
  }
  while (x == 1 || x == 2 || x == 3 || x == 4 || x == 5);
  printf("\nThank you");
  return 0;
}

void finsert(){
  if (f == (r + 1) % s){
    printf("Queue is full.\n");
  }
  else{
    if (f == -1){
      f = r = 0;
    }
    else if (f == 0){
      f = s - 1;
    }
    else{
      f--;
    }
    printf("Enter the value you want: ");
    scanf("%d", &q[f]);
  }
}
void rinsert(){
  if (f == (r + 1) % s){
    printf("Queue is full.\n");
  }
  else{
    if (f == -1){
      f = 0;
    }
    r = (r + 1) % s;
    printf("Enter the value you want: ");
    scanf("%d", &q[r]);
  }
}

void rdelete(){
  if (f == -1){
    printf("Queue is empty.\n");
  }
  else{
    printf("Deleted element is %d ", q[r]);
    if (f == r){
      r = f = -1;
    }
    else{
      if (r == 0){
        r = s - 1;
      }
      else{
        r--;
      }
    }
  }
}

void fdelete(){
  if (r == -1){
    printf("Queue is empty.\n");
  }
  else{
    printf("Deleted element is %d ", q[f]);
    if (f == r){
      f = r = -1;
    }
    else{
      f = (f + 1) % s;
    }
  }
}

void display(){
  int i = f;
  if (f == -1){
    printf("\nQueue is Empty\n");
  }
  else{
    printf("\nElements are: ");
    while (i != r){
      printf(" %d ", q[i]);
      i = (i + 1) % s;
    }
    printf(" %d ", q[i]);
  }
}