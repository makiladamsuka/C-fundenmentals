//hollow triangle
#include<stdio.h>

/*
* 
* * 
*   * 
*     * 
* * * * * 
*/

void main(){
    int n=5;

    for (int row=0;row<n;row++){
        for (int star=0;star<=row; star++){
            if (star==0 || row==n-1 || star==row){
                printf("* ");
            }
            else{
                printf("  ");
            }   
            
        }

       
        
        printf("\n");
    }
}