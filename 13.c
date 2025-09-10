//Explaining Structures
#include <stdio.h>


void main(){
    struct Book
    {
        char name[20];
        char author[20];
        int callno;
    };
    struct Book b1 = {"Book Name", "Book auther", 1001};

/*&b1.name is equal to &b1, &b1 refers to the address of the 
first elemet of the array name and &b1 means the address of
struct while struct book start with name both addresses are
same
*/ 
    printf("%p\n", &b1.name);
    printf("%p\n", &b1);
    printf("%p\n", b1.name);   //in here without address (&) it gives the addersss
    printf("%s\n", b1.name);   //depends on the format specifier that we use

    //So use b1.name it will act as both value and address
    
    
    
}

/*
int main() {
    struct Book {
        char name[20];
        char author[20];
        int callno;
    };
    
    // Corrected spelling and standard initialization
    struct Book b1 = {"Book Name", "Book Author", 1001};
    
    // Pass the members correctly
    displayBook(b1.name, b1.author, b1.callno);  <- We cant use &b1.name
    
    return 0; // Return 0 for success
}

void displayBook(char *name, char *author, int callno) {
    printf("%s %s %d\n", name, author, callno);

------------------------------------------------------------------------------------------------
    &b1.name and &b1.author: The displayBook function expects arguments of type char *,
     which is a pointer to a single character. However, &b1.name gives you a pointer to 
     the entire name array, which is of type char (*)[20]. Similarly, &b1.author gives you 
     a pointer of type char (*)[20]. When passing an array to a function in C, the array
      name by itself decays into a pointer to its first element. So, b1.name is already a 
      char*. Using the & is incorrect and would cause a type mismatch.

    &b1.callno: The displayBook function expects an int for its third argument, but &b1.callno
    provides a pointer to an integer (int *). These types don't match, and the compiler would 
    flag this as an error. You should pass the value of the variable, not its address.
------------------------------------------------------------------------------------------------
    }*/