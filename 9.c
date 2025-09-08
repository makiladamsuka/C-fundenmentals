//Passing entire structure variable
#include <stdio.h>
struct book {
  char name[25];
  char author[25];
  int callno;
};
void displayBook(struct book);

void main(){
    struct book b1 = {"Book name", "Book author", 1200};
    displayBook(b1);

}

void displayBook(struct book b){
    printf("%s %s %d", b.name, b.author, b.callno);
}