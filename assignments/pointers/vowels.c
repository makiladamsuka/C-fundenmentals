#include<stdio.h>
#include<string.h>

void main(){
    int vowelCount = 0;
    char sentence[200];
    printf("Enter a setence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *ptr = sentence;

    for (int i=0; i<strlen(sentence) -1; i++){
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            vowelCount++;
        }   
        ptr++;
    } 

    for (int i=strlen(sentence) -1;i>=0; i--){
        printf("%c", *ptr); 
        ptr--;
    } 


    printf("\nNo of vowels: %d", vowelCount);





}