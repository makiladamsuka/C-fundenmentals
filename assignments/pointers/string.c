#include<stdio.h>

void main(){
    float balanceA;
    float balanceB;

    printf("Enter balance 1 and 2: ");
    scanf("%f %f", &balanceA, &balanceB);

    float *pA = &balanceA;
    float *pB = &balanceB;

    float tmp = *pA;
    *pA = *pB;
    *pB = tmp;

    printf("Balace after transaction balance1: %.2f  balance2: %.2f", balanceA, balanceB);
}