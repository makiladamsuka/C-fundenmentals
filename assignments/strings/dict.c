#include <stdio.h>
#include <string.h>

int main() {
    char word1[100], word2[100];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    if (strcmp(word1, word2) < 0) {
        printf("\"%s\" comes first\n", word1);
    } else if (strcmp(word1, word2) > 0) {
        printf("\"%s\" comes first\n", word2);
    } else {
        printf("Both words are the same: \"%s\"\n", word1);
    }

    return 0;
}
