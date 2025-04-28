#include <stdio.h>

// Функция для нахождения максимума из двух чисел
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1, n2;

    printf("Введите первое число: ");
    scanf("%d", &n1);

    printf("Введите второе число: ");
    scanf("%d", &n2);

    int result = max(n1, n2);
    printf("Максимальное число: %d\n", result);

    return 0;
}
