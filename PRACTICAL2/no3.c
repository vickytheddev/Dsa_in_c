/*#include <stdio.h>
int main(){
    int n, m;
    printf("Enter the no of row: ");
    scanf("%d", &n);
    printf("Enter the no of coln:");
    scanf("%d", &m);
    int arr[n][m], i, j;
    int lc = 0, lr = 0, r = n, c = m, num = 0, t = 0;
    int w = sizeof(int);
    unsigned int base = (unsigned int)arr;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("Enter the value of arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (arr[i][j] == num){
                t = 1;  
                break;
            }
        }
        if (t == 0){
            break;
        }
    }
    printf("using row major order:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("address of arr[%d][%d] is %u\n", i, j, base + w * ((i - lr) * m + (j - lc)));
        }
    }
}*/



#include <stdio.h>
int main(){
    int n, m;
    printf("Enter the no of row: ");
    scanf("%d", &n);
    printf("Enter the no of coln:");
    scanf("%d", &m);
    int arr[n][m], i, j;
    int lc = 0, lr = 0, r = n, c = m, num = 0, t = 0;
    int w = sizeof(int);
    unsigned int base = (unsigned int)arr;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("Enter the value of arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (arr[i][j] == num){
                t = 1;  
                break;
            }
        }
        if (t == 0){
            break;
        }
    }
    printf("using column major order:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("address of arr[%d][%d] is %u\n", i, j, base + w *((i - lr) + (j - lc)*n));
        }
    }
}
                                                                                     