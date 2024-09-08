#include <stdio.h>

int countWords(char *text) {
    int wordCount = 0, isWord = 0;

    while (*text != '\0') {
        if (*text == ' ' || *text == '\t' || *text == '\n') {
            if (isWord) {
                isWord = 0;
            }
        } else {
            if (!isWord) {
                isWord = 1;
                wordCount++;
            }
        }
        text++;
    }

    return wordCount;
}

int main() {
    char inputText[1000];
    int totalWords = 0;

    while (fgets(inputText, sizeof(inputText), stdin) != NULL) {
        totalWords += countWords(inputText);
    }

    printf("%d\n", totalWords);
    return 0;
}
