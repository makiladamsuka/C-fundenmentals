//mutiplying 2D Array
#include<stdio.h>

int main(){
    int a[2][3] = {{1, 2, 3},
                   {4, 5, 6}};
    int b[3][2] = {{1, 2},
                   {3, 4}, 
                   {5, 6}};

    for (int rows=0;rows<3;rows++){
        for (int cols=0;cols<2;cols++){
            int sum = 0;
            for (int row=0;row<1;row++){
                for (int col=0;col<3;col++){
                    sum += a[row][col]* b[rows][cols];

                }

            } 
            printf("%d\t", sum);

        }
        printf("\n");

    }

   
}