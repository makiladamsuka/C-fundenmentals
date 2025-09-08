//Passing an Array to a Function
#include<stdio.h>

void printArray(int*ptr, int size);

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;
    printArray(ptr, size);
    return 0;

}

void printArray(int*ptr, int size){
    for (int i=0;i<size;i++){
        printf("Element %d is %d \n", i, *ptr);
        ptr++;
    }
}