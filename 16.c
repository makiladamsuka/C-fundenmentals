//X pattern
#include <stdio.h>
/*
input number (n) ---> 5

    00000
    00000
    00000
    00000
    00000
should print 1-n on diagonals and antidiagonals

00, 11, 22, 33, 44 and 04, 13, 22, 31, 40

*/
int main() {
int n, value=1;

printf("Enter an odd nunmber >= 5: ");
scanf("%d", &n);

for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        if (i==j || i+j==n-1){
            printf("%d", value);
            value++;
            if (value>9){
                value=1;
            }
        }
        else{
            printf(" ");
    }
}
    printf("\n");
}


}
    
