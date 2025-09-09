#include<stdio.h>
#include<string.h>

void main(){
    char firstName[20], secondName[20], userName[50];
    printf("Enter first name | seond name:  ");
    scanf("%s %s", &firstName, &secondName);

    strcat(userName, firstName);
    strcat(userName, "_");
    strcat(userName, secondName);

    printf("%s", userName);


}