#include <stdio.h>

int main() {
    int n;
    double liczba, suma = 0;

    printf("Ile liczb chcesz podac? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Liczba n musi byc wieksza od zera!\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf("%lf", &liczba);
        suma = suma + liczba;
    }

    printf("Suma: %.2f\n", suma);
    printf("Srednia: %.2f\n", suma / n);

    return 0;
}