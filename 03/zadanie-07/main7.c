#include <stdio.h>

#define N 10

void wczytaj(int t[], int n) {
    printf("Podaj %d liczb calkowitych:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
}


double srednia(int t[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += t[i];
    }
    return (double)suma / n;
}


void wypisz_wieksze(int t[], int n, double sr) {
    printf("Wieksze od sredniej: ");
    for (int i = 0; i < n; i++) {
        if (t[i] > sr) {
            printf("%d ", t[i]);
        }
    }
    printf("\n");
}


int najmniejsza(int t[], int n) {
    int min = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i] < min) {
            min = t[i];
        }
    }
    return min;
}

int najwieksza(int t[], int n) {
    int max = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i] > max) {
            max = t[i];
        }
    }
    return max;
}


int suma_nieparzystych(int t[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] % 2 != 0) {
            suma += t[i];
        }
    }
    return suma;
}


void wypisz_od_konca(int t[], int n) {
    printf("Od konca: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

int main(void) {
    int tab[N];

    wczytaj(tab, N);

    double sr = srednia(tab, N);
    printf("Srednia: %.2f\n", sr);
    wypisz_wieksze(tab, N, sr);
    printf("Najmniejsza: %d\n", najmniejsza(tab, N));
    printf("Najwieksza: %d\n", najwieksza(tab, N));
    printf("Suma nieparzystych: %d\n", suma_nieparzystych(tab, N));
    wypisz_od_konca(tab, N);

    return 0;
}