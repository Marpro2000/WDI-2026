#include <stdio.h>
int main() {
char klasa;
int poddany = 0, giermek = 0, rycerz = 0, mag = 0, krolowa = 0;
printf("Wybierz klase spoleczna (P, G, R, M, K): ");
scanf(" %c", &klasa);
switch (klasa) {
case 'K':  krolowa = 1; 
case 'M':  mag = 1; 
case 'R':  rycerz = 1; 
case 'G':  giermek = 1; 
case 'P':  poddany = 1;
break;
default:
printf("Nie ma takiej klasy!\n");
return 0;
}
printf("Moze: ");
if (poddany) printf("czcic Krola");
if (giermek) printf(", wchodzic na dziedziniec zamkowy codziennie");
if (rycerz) printf(", wchodzic do zamku codziennie oraz rekrutowac giermkow");
if (mag) printf(", rozmawiac z Krolem");
if (krolowa) printf(", rozkazywac Krolowi");
printf("\n");
return 0;
}