#include<stdio.h>

void main(){
    int ages[5] = {23, 15, 45, 51, 70};
    int *pages = ages;
    int oldest = *pages;
    int size = sizeof(ages)/sizeof(ages[0]);
   
    for(int i=1; i<size; i++){
        pages++;
        if (oldest< *pages){
            oldest = *pages;
        }
    }

    printf("Oldest member is %d years old", oldest);
}