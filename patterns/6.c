//inverted hill
#include<stdio.h>

/*
 *********
  *******
   *****
    ***
     *
*/

void main(){
    int n=5;
    for (int row=0; row<n; row++){
        for (int space=0; space<row; space++){
            printf(" ");
        }
        //first triangle
        for (int star=row; star<n; star++){
            printf("*");
        }

        //second traingle
        for (int star=row; star<n-1; star++){
            printf("*");
        }


        printf("\n");
    }
}