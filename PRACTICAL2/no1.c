#include <stdio.h>
int main(){
    int i, j;
    int k = 0;
    int s_m[3][6];
    int arr[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}};
    int zero = 0, nonzero = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            if (arr[i][j] == 0){
                zero++;
            }
            else{
                nonzero++;
            }
        }
    }
    printf("zero value is %d\n", zero);
    printf("nonzero value is %d\n", nonzero);
    if (zero < nonzero){
        printf("marrix is not sparse matrix");
    }
    else{
        for (i = 0; i < 4; i++){
            for (j = 0; j < 5; j++){
                if (arr[i][j] != 0){
                    s_m[0][k] = i;
                    s_m[1][k] = j;
                    s_m[2][k] = arr[i][j];
                    k++;
                }
            }
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 6; j++){
            printf("%d ", s_m[i][j]);
        }
        printf("\n");
    }
}
