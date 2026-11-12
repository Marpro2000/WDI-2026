#include <stdio.h>


void wypisz_for(int t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

void wypisz_while(int t[], int n) {
    int i = 0;
    while (i < n) {
        printf("%d ", t[i]);
        i++;
    }
    printf("\n");
}

void wypisz_do_while(int t[], int n) {
    int i = 0;
    do {
        printf("%d ", t[i]);
        i++;
    } while (i < n);
    printf("\n");
}


void wypisz_for_od_konca(int t[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

void wypisz_while_od_konca(int t[], int n) {
    int i = n - 1;
    while (i >= 0) {
        printf("%d ", t[i]);
        i--;
    }
    printf("\n");
}

void wypisz_do_while_od_konca(int t[], int n) {
    int i = n - 1;
    do {
        printf("%d ", t[i]);
        i--;
    } while (i >= 0);
    printf("\n");
}

int main(void) {
    int tab[5] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Od poczatku do konca:\n");
    printf("for:      "); wypisz_for(tab, n);
    printf("while:    "); wypisz_while(tab, n);
    printf("do-while: "); wypisz_do_while(tab, n);

    printf("\nOd konca do poczatku:\n");
    printf("for:      "); wypisz_for_od_konca(tab, n);
    printf("while:    "); wypisz_while_od_konca(tab, n);
    printf("do-while: "); wypisz_do_while_od_konca(tab, n);

    return 0;
}