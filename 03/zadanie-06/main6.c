#include <stdio.h>

double srednia(int t[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += t[i];
    }
    return (double)suma / n;
}

int main(void) {
    int tab[5];
    int n = 5;

    printf("Podaj 5 liczb calkowitych:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    double sr = srednia(tab, n);
    printf("Srednia: %.2f\n", sr);

    printf("Wieksze od sredniej: ");
    for (int i = 0; i < n; i++) {
        if (tab[i] > sr) {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");

    return 0;
}