#include <stdio.h>
void dodawanie(void) {
int n;
double x, suma = 0;
printf("Ile liczb dodac? ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
printf("Liczba %d: ", i);
scanf("%lf", &x);
suma += x;
}
printf("Suma = %.2f\n", suma);
}
void odejmowanie(void) {
double wynik, x;
printf("Podaj liczbe poczatkowa: ");
scanf("%lf", &wynik);
printf("Podawaj liczby do odjecia (0 konczy):\n");
while (1) {
scanf("%lf", &x);
if (x == 0) {
break;
}
wynik -= x;
}
printf("Wynik = %.2f\n", wynik);
strona 18 / 23
}
double mnozenie(double a, double b) {
return a * b;
}
void dzielenie(void) {
double a, b;
printf("Podaj dzielna i dzielnik: ");
scanf("%lf %lf", &a, &b);
if (b == 0) {
printf("Nie mozna dzielic przez zero!\n");
} else {
printf("%.2f / %.2f = %.4f\n", a, b, a / b
    }
}
double potega(double liczba, int wykladnik) {
double wynik = 1;
for (int i = 0; i < wykladnik; i++) {
wynik *= liczba;
}
return wynik;
}
double kwadrat(double x) {
return potega(x, 2); 
}
unsigned long long silnia(int n) {
unsigned long long wynik = 1;
for (int i = 2; i <= n; i++) {
wynik *= i;
}
return wynik;
}
int main() {
int opcja;
do {
printf("\n--- KALKULATOR ---\n");
printf("1 - dodawanie n liczb\n");
printf("2 - odejmowanie do podania 0\n");
printf("3 - mnozenie dwoch liczb\n");
printf("4 - dzielenie\n");
printf("5 - potegowanie\n");
printf("6 - kwadrat liczby\n");
printf("7 - silnia\n");
printf("0 - koniec\n");
printf("Wybor: ");
scanf("%d", &opcja);
switch (opcja) {
case 1:
dodawanie();
break;
case 2:
odejmowanie();
break;
case 3: {
double a, b;
printf("Podaj dwie liczby: ");
scanf("%lf %lf", &a, &b);
printf("Iloczyn = %.2f\n", mnozenie(a, b));
break;
}
case 4:
dzielenie();
break;
case 5: {
double a;
int n;
printf("Podaj liczbe i wykladnik (>= 0): ");
scanf("%lf %d", &a, &n);
if (n < 0) {
printf("Wykladnik musi byc >= 0!\n");
} else {
printf("Wynik = %.4f\n", potega(a, n));
}
break;
}
case 6: {
double a;
printf("Podaj liczbe: ");
scanf("%lf", &a);
printf("Kwadrat = %.2f\n", kwadrat(a));
break;
}
case 7: {
int n;
printf("Podaj n (0-20): ");
scanf("%d", &n);
if (n < 0 || n > 20) {
printf("Poza zakresem!\n");
} else {
printf("%d! = %llu\n", n, silnia(n));
}
break;
}
case 0:
printf("Do widzenia!\n");
break;
default:
printf("Nie ma takiej opcji!\n");
}
} while (opcja != 0);
return 0;
}

