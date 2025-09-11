//diamond pattern
//inverted hill
#include<stdio.h>

/*
combination of 6.c and 5.c
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

void main(){
    int n=5;

    for(int i=0; i<n; i++){
        //space triangle
        for(int j=i; j<n-1; j++){
            printf(" ");
        }

        //first triangle
        for(int j=0; j<i; j++){
            printf("*");
        }

        //second triangle
        for(int j=0; j<=i; j++){
            printf("*");
        }

        printf("\n");
    }



    for (int row=0; row<n-1; row++){
        for (int space=0; space<=row; space++){
            printf(" ");
        }
        //first triangle
        for (int star=row; star<n-1; star++){
            printf("*");
        }

        //second traingle
        for (int star=row; star<n-2; star++){
            printf("*");
        }


        printf("\n");
    }
}