//rotate the matrix
#include<stdio.h>

void main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int arr2[3][3];
    int arr3[3][3];


    printf("Original matrix\n");            
    for (int row=0; row<3;row++){
        for (int col=0; col<3; col++){
            printf("%d \t", arr[row][col]);
         
        }
    printf("\n");
    }

/*      Expected output
        1  4  7                       7  4  1                 
        2  5  8        -->            8  5  2
        3  6  9                       9  6  3

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

printf("reverse each rows --> clockwise\n");
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

printf("reverse each rows --> countercloackwise\n");
for (int row=0; row<3;row++){
    for (int col=0; col<3; col++){
        arr3[row][col] = arr2[2-row][col];
         
    }
    
}
for (int row=0; row<3;row++){
    for (int col=0; col<3; col++){
        printf("%d \t", arr3[row][col]);
         
    }
    printf("\n");
}

}