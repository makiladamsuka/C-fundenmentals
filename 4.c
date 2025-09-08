//matrix multiplication
#include <stdio.h>

int main(){
    int a[2][3] = {{1,2,3},
                   {4,5,6}};

    int b[3][2] = {{1,2},
                   {3,4}, 
                   {5,6}};
    int result[2][2];

    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++){
            int sum = 0;
            for(int k=0; k<3;k++){
                sum+= a[row][k] * b[k][col];
            }
           result[row][col] = sum;
        }
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}