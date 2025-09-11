//hollow triangle
#include<stdio.h>

/*
* * * * * 
*     * 
*   * 
* * 
*   pattern
*/

void main(){
    int n=5;

    for (int row=0;row<n;row++){
        for (int star=row;star<n; star++){
            if(row ==0 || star==row || star==n-1){
                printf("* ");
            }
            else{
                printf("  ");
            }    
            
        } 

        printf("\n");
    }
}