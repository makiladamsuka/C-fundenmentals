//add two numbers with pointers
#include<stdio.h>

int add(int *,int *);

int main(){
    int num1, num2, *pnum1, *pnum2, sum;

    num1 = 1;
    num2 = 2;

 

    printf("sum: %d", add(&num1, &num2));

}

int add(int *ptr1, int *ptr2){
    return *ptr1 + *ptr2;
}