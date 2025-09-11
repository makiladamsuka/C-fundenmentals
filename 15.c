//strcpm without strcmp
#include<stdio.h>

int strcomp(char *, char *);

void main(){
    char string1[6] = "Hello";
    char string2[6] = "Hellp";
    printf("%d ", strcomp(string1, string2));

}

int strcomp(char *str1, char *str2){
    if(*str1 != '\0'){
        if (*str1 == *str2){
            strcomp(++str1, ++str2);
        }
        else{
            
            if (*str1 > *str2){
                return 1;  
            }
            if (*str1 < *str2) {
                return -1;
            }         
        }
    }
    else{
        return 0;
    }
}
        
    
    
 