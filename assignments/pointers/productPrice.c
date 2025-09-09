#include<stdio.h>

void main(){
    int price = 1200;
    int *ptr = &price;
    int newPrice;
    printf("Enter the new price: ");
    scanf("%d", &newPrice);

    *ptr = newPrice;

    printf("Price updated successfully. New Price = %d\n", price);
}