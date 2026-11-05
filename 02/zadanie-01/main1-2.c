#include <stdio.h>

int main(void)
{
    int liczba;
    int suma = 0, ile = 0;
    int max = 0, min = 0;

    printf("Podawaj liczby :\n");

    while (1) {
        scanf("%d", &liczba);

        if (liczba % 2 != 0) {
            break;
        }

        if (ile == 0) {
            max = liczba;
            min = liczba;
        }
        if (liczba > max) max = liczba;
        if (liczba < min) min = liczba;

        suma += liczba;
        ile++;
    }

    if (ile == 0) {
        printf("Nie podano zadnych liczb.\n");
    } else {
        printf("Najwieksza: %d\n", max);
        printf("Najmniejsza: %d\n", min);
        printf("Suma: %d\n", suma);
        printf("Srednia: %.2f\n", (double)suma / ile);
    }

    return 0;
}