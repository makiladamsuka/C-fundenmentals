//year month days with days

#include<stdio.h>


int main(){
    int nodays;
    printf("Enter no fo days");
    scanf("%d", &nodays);

    int years = nodays/365;
    int months = nodays%365 /30;
    int days = nodays%365%30;

    printf("years: %d months: %d days: %d", years, months, days);
}