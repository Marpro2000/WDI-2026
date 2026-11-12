#include <stdio.h>

#define MAX 5


int fifo[MAX];
int ile_fifo = 0;

void fifo_dodaj(int x) {
    if (ile_fifo == MAX) {
        printf("Kolejka FIFO pelna!\n");
        return;
    }
    fifo[ile_fifo] = x;         
    ile_fifo++;
}

void fifo_zdejmij(void) {
    if (ile_fifo == 0) {
        printf("Kolejka FIFO pusta!\n");
        return;
    }
    printf("Zdjeto z FIFO: %d\n", fifo[0]);   
    for (int i = 0; i < ile_fifo - 1; i++) {  
        fifo[i] = fifo[i + 1];
    }
    ile_fifo--;
}


int lifo[MAX];
int ile_lifo = 0;

void lifo_dodaj(int x) {
    if (ile_lifo == MAX) {
        printf("Stos LIFO pelny!\n");
        return;
    }
    lifo[ile_lifo] = x;         
    ile_lifo++;
}

void lifo_zdejmij(void) {
    if (ile_lifo == 0) {
        printf("Stos LIFO pusty!\n");
        return;
    }
    ile_lifo--;
    printf("Zdjeto z LIFO: %d\n", lifo[ile_lifo]);  
}

void pokaz(int t[], int n, const char nazwa[]) {
    printf("%s: ", nazwa);
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

int main(void) {
    int opcja, x;

    do {
        printf("\n");
        pokaz(fifo, ile_fifo, "FIFO");
        pokaz(lifo, ile_lifo, "LIFO");
        printf("1 - dodaj do FIFO\n");
        printf("2 - zdejmij z FIFO\n");
        printf("3 - dodaj do LIFO\n");
        printf("4 - zdejmij z LIFO\n");
        printf("0 - koniec\n");
        printf("Wybor: ");
        scanf("%d", &opcja);

        switch (opcja) {
            case 1:
                printf("Liczba: ");
                scanf("%d", &x);
                fifo_dodaj(x);
                break;
            case 2:
                fifo_zdejmij();
                break;
            case 3:
                printf("Liczba: ");
                scanf("%d", &x);
                lifo_dodaj(x);
                break;
            case 4:
                lifo_zdejmij();
                break;
            case 0:
                printf("Koniec.\n");
                break;
            default:
                printf("Nie ma takiej opcji!\n");
        }
    } while (opcja != 0);

    return 0;
}