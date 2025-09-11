//hill pattern 

#include<stdio.h>

/*
     *
    ***
   *****
  *******
 *********
*/

void main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
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
}