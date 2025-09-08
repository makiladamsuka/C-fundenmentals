//diagonal sum of a matrix

#include <stdio.h>

int main(){
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
    /*
    [0][0], [1][1], [2][2]
    
    */

    int diagnalSum = 0;
    for (int row=0; row<3; row++){
        for (int col=0; col<3; col++){
            if(col == row){
                diagnalSum += arr[col][row];
            }
        }
    }

    printf("diagonal sum : %d", diagnalSum);
    return 0;
}