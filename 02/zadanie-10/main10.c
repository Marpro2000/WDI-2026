#include <stdio.h>
double potega(double liczba, int wykladnik) {
    double wynik = 1;
    int ujemny = 0;
    

if (wykladnik < 0) {
    ujemny = 1;
wykladnik = -wykladnik;
}
for (int i = 0; i < wykladnik; i++) {
wynik *= liczba;
}
if (ujemny) {
return 1 / wynik;
}
return wynik;
}
int main() {
double a;
int n;
printf("Podaj liczbe i wykladnik: ");
scanf("%lf %d", &a, &n);
printf("%.2f ^ %d = %.4f\n", a, n, potega(a, n));
return 0;
}
