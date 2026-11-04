#include <stdio.h>
double potega(double liczba, int wykladnik) {
if (wykladnik == 0) { 
return 1;
}
if (wykladnik < 0) {
return 1 / potega(liczba, -wykladnik);
}
return liczba * potega(liczba, wykladnik - 1); 
}
int main() {
double a;
int n;
printf("Podaj liczbe i wykladnik: ");
scanf("%lf %d", &a, &n);
printf("%.2f ^ %d = %.4f\n", a, n, potega(a, n));
return 0;
}