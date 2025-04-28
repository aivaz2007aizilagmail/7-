#include <stdio.h>

// Функция для поиска слова в строке
int indexOf(char text[], char word[]) {
    int textLength = 0;
    int wordLength = 0;

    // Вычисляем длину строки text
    while (text[textLength] != '\0') {
        textLength++;
    }

    // Вычисляем длину слова word
    while (word[wordLength] != '\0') {
        wordLength++;
    }

    // Поиск слова в тексте
    for (int i = 0; i <= textLength - wordLength; i++) {
        int match = 1; // Флаг совпадения
        for (int j = 0; j < wordLength; j++) {
            if (text[i + j] != word[j]) {
                match = 0; // Несовпадение символов
                break;
            }
        }
        if (match == 1) {
            return i; // Возвращаем индекс начала слова
        }
    }

    return -1; // Слово не найдено
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
