//deleting a element from a array

#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int deleteIndex;
    int size = sizeof(arr)/sizeof(arr[0]);


    printf("Enter index to delelte: ");
    scanf("%d", &deleteIndex);
    
    for(int i=deleteIndex; i<size; i++){
        arr[i] = arr[i+1];
    }
    size--;
    for (int e=0; e<size; e++){
        printf("%d ", arr[e]);
    }

}