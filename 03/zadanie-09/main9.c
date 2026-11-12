#include <stdio.h>

#define N 10

void wczytaj(int t[], int n) {
    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
}

void wypisz(int t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

void bubble_sort(int t[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (t[j] > t[j + 1]) {
                int tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    int tab[N];

    wczytaj(tab, N);
    printf("Przed: ");
    wypisz(tab, N);

    bubble_sort(tab, N);

    printf("Po:    ");
    wypisz(tab, N);
    return 0;
}