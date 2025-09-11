//safe strcat
#include<stdio.h>
#include<string.h>

void main(){
    char string1[10], string2[10];
    printf("Enter string 1: ");
    gets(string1);

    printf("Enter string 1: ");
    gets(string2);

    int size =strlen(string1);
    int availableSize = sizeof(string1) - size;


    if (availableSize>strlen(string2)){
        strcat(string1, string2);
        puts(string1);
    }

    else{
        printf("Size error");
    }

}
