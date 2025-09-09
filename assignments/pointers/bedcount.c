#include<stdio.h>

void main(){
    int bedAvlb[10] = {1, 0, 1, 1, 0, 0, 1, 0, 1, 0};
    int *ptr = bedAvlb;
    int avlnBeds =  0;

    for (int i=0; i<sizeof(bedAvlb); i++){
        if (*ptr == 1){
            avlnBeds++;
        }
        ptr++;
    }

    printf("Free beds = %d", avlnBeds);

}