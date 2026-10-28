#include <stdio.h>
int main(){
    int liczba1, liczba2;
    scanf("%d %d", &liczba1, &liczba2);
    if (liczba1 > liczba2) {
        printf("Wieksza: %d\n", liczba1);
        printf("Mniejsza: %d\n", liczba2);
    } else {
        printf("Wieksza: %d\n", liczba2);
        printf("Mniejsza: %d\n", liczba1);
    }
     if (liczba1 > liczba2) {
        printf("%d>%d\n", liczba1, liczba2);
    } else if (liczba1 < liczba2) {
        printf("%d<%d\n", liczba1, liczba2);
    } else {
        printf("%d=%d\n", liczba1, liczba2);
    }

    return 0;

    return 0;
}