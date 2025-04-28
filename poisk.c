#include <stdio.h>

int indexOf(char text[], char word[]) {
    int textLength = 0;
    int wordLength = 0;
    while (text[textLength] != '\0') {
        textLength++;
    }
    while (word[wordLength] != '\0') {
        wordLength++;
    }
    for (int i = 0; i <= textLength - wordLength; i++) {
        int match = 1; 
        for (int j = 0; j < wordLength; j++) {
            if (text[i + j] != word[j]) {
                match = 0; 
                break;
            }
        }
        if (match == 1) {
            return i; 
        }
    }
    return -1; //
}

int main() {
    char text[] = "the cat sat";
    char word[] = "cat";
    int position = indexOf(text, word);
    if (position != -1) {
        printf("Слово \"%s\" найдено на позиции %d\n", word, position);
    } else {
        printf("Слово \"%s\" не найдено\n", word);
    }
    return 0;
}
