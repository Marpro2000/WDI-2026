#include <stdio.h>

int main() {
    int n, suma = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        suma = suma + i;
    }

    printf("Suma liczb naturalnych mniejszych od %d: %d\n", n, suma);

    return 0;
}