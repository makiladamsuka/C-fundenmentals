#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200] = "";


    printf("Enter first sentence: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second sentence: ");
    fgets(str2, sizeof(str2), stdin);


    int str1len = strlen(str1);
    int str2len = strlen(str2);

    if (str1len<str2len){
        strcat(result, str1);
        strcat(result, str2);
        printf("%s", result);

    }

    else if (str1len>str2len){
        printf("String1 length: %d String2 length: %d", str1len, str2len);

    }

    else{
        int cmp = strcmp(str1, str2);
        if (cmp < 0)
            printf("\"%s\" is greater\n", str2);
        else if (cmp > 0)
            printf("\"%s\" is greater\n", str1);
        else
            printf("Both sentences are equal: \"%s\"\n", str1);

    }

}
