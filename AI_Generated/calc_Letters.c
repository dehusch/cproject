#include <stdio.h>
#include <string.h>

int main(void) {
    char word[100];
    int length;

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);

    printf("The word has %d letters.", length);

    return 0;
}
