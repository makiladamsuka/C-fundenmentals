//number palindrome

#include<stdio.h>

int main(){
    int num = 1234;
    int revnum = 0;
    while (num!=0)
    {
        revnum *= 10;
        revnum += num%10;
        num/=10;

    }
    printf("revnum is %d", revnum);
    
}