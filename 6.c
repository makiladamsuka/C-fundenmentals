//add two numbers with pointers
#include<stdio.h>

int main(){
    int num1, num2, *pnum1, *pnum2, sum;

    num1 = 1;
    num2 = 2;

    pnum1 = &num1;
    pnum2 = &num2;

    sum = *pnum1 + *pnum2;

    printf("sum: %d", sum);

}