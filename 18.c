//holloe diamond
#include<stdio.h>

/*
when n=5

00*00   spces 2  2
0*0*0           1 3
*000*           0 4
0*0*0           1 3
00*00            2   
rows = 5, cols = 5

*/

void main(){
    int n, spaces;
    printf("Enter height of the diamond (odd number): ");
    scanf("%d", &n);
    spaces = n/2;

    for(int row=0;row<n/2;row++){
        for (int _=0; _<spaces;_++){
            printf("0");
        }
        printf("*");

        for (int k=0; k<n/2-spaces;k+=2){
            printf("k");

        }
        if (row>0){
            printf("*");
        }
        

        spaces--;
        
        printf("\n"); 
    }
}