#include<stdio.h>

void main(){
    int marks[5] = {85, 90, 78, 92, 88};
    int *pmarks = marks;
    int sum = 0;
    int size = sizeof(marks)/sizeof(marks[0]);
   
    for(int i=0; i<size; i++){
        sum += *pmarks;
        pmarks++;
    }

    printf("Total %d marks", sum);
}