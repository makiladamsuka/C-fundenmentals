#include<stdio.h>

void main(){
    int tempReading[5] = {30, 32, 31, 29, 28};
    int *ptempReading = tempReading;
    int sum = 0, avg=0;
    int size = sizeof(tempReading)/sizeof(tempReading[0]);
   
    for(int i=0; i<size; i++){
        sum += *ptempReading;
        ptempReading++;
    }
    avg = sum/size;
    printf("Average %d mark", avg);
}