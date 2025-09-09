#include<stdio.h>
#include<string.h>

void main(){
    char string[] = "Colombo, Sri Lanka";
    int size = sizeof(string);
    char copystring[size];

    char *ptr = string;
    char *cptr = copystring;

    for (int i=0; i<size; i++){
        *cptr = *ptr;
        cptr++;
        ptr++;
    }

    printf("%s", copystring);

}