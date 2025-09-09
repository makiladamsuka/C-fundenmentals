#include<stdio.h>
#include<string.h>

int isPalindrome(char *ptr, int size);

void main(){
    char word[50], concat[100] = "";
    printf("Enter a word: ");
    scanf("%s", &word);

    strcat(concat, word);
    strcat(concat, word);

    printf("%s\n", concat);

    int size = strlen(concat);
    char *ptr = concat;

    if (isPalindrome(ptr, size)){
        printf("Palindrome");
    }

    else{
        printf("Not Palindrome");
    }

}

int isPalindrome(char *ptr, int size){
    char *start = ptr;
    char *end = ptr + size - 1;

    while (start<=end){
        if(*start != *end){
            return 0;
        }

        start++;
        end--;
    }
    return 1;

}