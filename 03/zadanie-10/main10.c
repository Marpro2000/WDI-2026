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


void scal(int t[], int lewy, int srodek, int prawy) {
    int pom[N];
    int i = lewy;        
    int j = srodek + 1;  
    int k = 0;          

    while (i <= srodek && j <= prawy) {
        if (t[i] <= t[j]) {
            pom[k] = t[i];
            i++;
        } else {
            pom[k] = t[j];
            j++;
        }
        k++;
    }
    while (i <= srodek) {     
        pom[k] = t[i];
        i++;
        k++;
    }
    while (j <= prawy) {      
        pom[k] = t[j];
        j++;
        k++;
    }
    for (int m = 0; m < k; m++) {   
        t[lewy + m] = pom[m];
    }
}

void merge_sort(int t[], int lewy, int prawy) {
    if (lewy >= prawy) {
        return;                         
    }
    int srodek = (lewy + prawy) / 2;
    merge_sort(t, lewy, srodek);        
    merge_sort(t, srodek + 1, prawy);   
    scal(t, lewy, srodek, prawy);       
}

int main(void) {
    int tab[N];

    wczytaj(tab, N);
    printf("Przed: ");
    wypisz(tab, N);

    merge_sort(tab, 0, N - 1);

    printf("Po:    ");
    wypisz(tab, N);
    return 0;
}