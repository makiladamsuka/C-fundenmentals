//Passing individual structure elements
#include <stdio.h>
void displayBook(char *, char* , int );

void main(){
    struct Book
    {
        char name[20];
        char author[20];
        int callno;
    };
    struct Book b1 = {"Book Name", "Book auther", 1001};
    displayBook(b1.name, b1.author, b1.callno);
    
}

void displayBook(char *name, char* author, int callno){
    printf("%s %s %d", name, author, callno);
}

