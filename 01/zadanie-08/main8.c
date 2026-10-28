#include <stdio.h>

int main() {
    int a, b;
    char znak;

    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);

    printf("Podaj dzialanie (+, -, *, /, %%): ");
    scanf(" %c", &znak);

    if (znak == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    } else if (znak == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    } else if (znak == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    } else if (znak == '/') {
        if (b == 0) {
            printf("Blad: nie mozna dzielic przez zero!\n");
        } else {
            printf("%d / %d = %.2f\n", a, b, (double)a / b);
        }
    } else if (znak == '%') {
        if (b == 0) {
            printf("Blad: nie mozna dzielic przez zero!\n");
        } else {
            printf("%d %% %d = %d\n", a, b, a % b);
        }
    } else {
        printf("Nieznane dzialanie: %c\n", znak);
    }

    return 0;
}