//hollow triangle
#include<stdio.h>
/*
*********
 *     *
  *   *
   * *
    *
*/
void main(){
    int n=5;
    for (int row=0; row<n; row++){
        for(int spc=0; spc<row; spc++){
            printf(" ");
        }

        for (int str=row; str<n; str++){
            if(str==row || row==0){
                printf("*");
            }
            else{
                printf(" ");
            }    
        }

        for (int str=row; str<n-1; str++){
            if(str==n-2 || row==0){
                printf("*");
            }
            else{
                printf(" ");
            }   
            
        }

        printf("\n");
    }
}