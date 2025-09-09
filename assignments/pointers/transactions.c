#include<stdio.h>

void main(){
    int transaction[5] = {200, -500, 1000, -200, 300};
    int *ptransactions = transaction;
    int size = sizeof(transaction)/sizeof(transaction[0]);
    int deposits=0, withdrawal=0;
    for (int i=0; i<size; i++){
        if(*ptransactions > 0){
            deposits++;
        }
        else{
            withdrawal++;
        }
        ptransactions++;
    }

    printf("withdrawals: %d deposites: %d", withdrawal, deposits);

}
