#include<stdio.h>
int main(){
    int x=10;
    int *p=&x;
    int **pp=&p;
    double y=10.5;
    double *d=&y;
    double **dd=&d;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%u\n",p);
    printf("%u\n",pp);
    printf("%d\n",*p);
    printf("%d\n",**pp); 
    printf("%f\n",y);
    printf("%f\n",&y);
    printf("%u\n",d);
    printf("%u\n",dd);
    printf("%f\n",*d);
    printf("%f\n",**dd);  
}