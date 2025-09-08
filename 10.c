//Using pointers with structures
#include <stdio.h>


struct book {
    char name[25];
    char author[25];
    int callno;
};

void displayBook(struct book *);


int main() {
    struct book b1 = {"Book name", "Book author", 1200}; 
    
    displayBook(&b1);

    return 0;
}


void displayBook(struct book *ptr) {
    printf("%s %s %d\n", ptr->name, ptr->author, ptr->callno);
}