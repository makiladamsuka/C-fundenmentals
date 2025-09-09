#include<stdio.h>

void main(){
    char name[] = "Alice";
    int size = sizeof(name);
    char *pname = name;
    for (int i=0; i<size-1; i++){
        pname++;
    }

    for (int k=size-1; k>0; k--){
        pname--;
        printf("%c", *pname);
    }
}