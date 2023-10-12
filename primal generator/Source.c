#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable : 4996)

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int start, end;

    printf("Введите начало диапазона: ");
    scanf("%d", &start);
    printf("Введите конец диапазона: ");
    scanf("%d", &end);

    printf("Простые числа в диапазоне %d-%d: \n", start, end);

    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}