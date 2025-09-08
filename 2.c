//Sorting (Bubble Sort)

#include <stdio.h>

int main(){
    int arr[10] = {4, 6, 3, 7, 9, 1, 2, 0, 5, 8};

    /*
    4, 6 --> 4, 6
    4, 3 --> 3, 4
    3, 7 --> 3, 7
    3, 9 --> 3, 9
    3, 1 --> 1, 3
    1, 2 --> 1, 2
    1, 0 --> 0, 1
    ...
    */
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            
            if (arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

    }
    printf("Sorted Array : ");
    for (int e=0; e<size; e++){
        printf("%d ", e);
    }
}