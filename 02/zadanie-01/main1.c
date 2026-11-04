#include <stdio.h>
int main(){
    int suma,
    int suma = 0, ile = 0;
    int max, min;

    printf("podawaj liczby do 0: \n");

    while (1) {
        scanf("%d", &liczba);


        if (liczba == 0);{
        break;
    }
    if (ile == 0){
        max = liczba;
        min = liczba;
    }
    if (liczba > max) max = liczba;
    if (liczba < min) min = liczba;

    suma +=liczba;
    ile++;
}
if  (ile == 0) {
    printf("Nie podano zadnych liczb\n");
} else {
    printf("najwieksza: %d\n", max);
    printf("najmniejsza: %d\n", min);
    printf("suma: %d\n", suma);
    printf("srednia: %.2f\n", (double)suma / ile);


}
    return 0;
}