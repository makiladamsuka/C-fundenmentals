//rotate the matrix
#include<stdio.h>

void main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int arr2[3][3];
    int arr3[3][3];
                    
/*      Expected output
        7  4  1                 
        8  5  2
        9  6  3

*/

for (int row=0; row<3;row++){
    for (int col=0; col<3; col++){
        arr2[col][row] = arr[row][col];
         
    }
}
printf("swapping rows to cols\n");
for (int row=0; row<3;row++){
    for (int col=0; col<3; col++){
        printf("%d \t", arr2[row][col]);
         
    }
    printf("\n");
}
printf("\n");

printf("reverse each rows\n");
for (int row=0; row<3;row++){
    for (int col=0; col<3; col++){
        arr3[row][col] = arr2[row][2-col];
         
    }
    
}
for (int row=0; row<3;row++){
    for (int col=0; col<3; col++){
        printf("%d \t", arr3[row][col]);
         
    }
    printf("\n");
}

}