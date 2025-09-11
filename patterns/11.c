//Hollow triangle
#include<stdio.h>

/*
     *
    * *
   *   *
  *     *
 *********
*/

void main(){
    int n=5;
    for (int row=0; row<n; row++){
        for(int spc=row; spc<n; spc++){
            printf(" ");
        }

        for(int str1=0;str1<=row;str1++){
            if(str1==0 || row==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        for(int str1=0;str1<row;str1++){
            if(str1==row-1 || row==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
}