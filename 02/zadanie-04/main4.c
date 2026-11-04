#include <stdio.h>
int main() {
int a = 0, b = 0;
char dzialanie = '+';
int opcja;
do {
/* wynik wyswietlany POWYZEJ menu */
printf("\n=============================\n");
printf("a = %d, b = %d, dzialanie: %c\n", a, b, dzialanie);
switch (dzialanie) {
case '+': printf("Wynik: %d + %d = %d\n", a, b, a + b); break;
case '-': printf("Wynik: %d - %d = %d\n", a, b, a - b); break;
case '*': printf("Wynik: %d * %d = %d\n", a, b, a * b); break;
case '/':
if (b == 0) printf("Wynik: dzielenie przez zero!\n");
strona 13 / 23
else printf("Wynik: %d / %d = %.2f\n", a, b, (double)a / b);
break;
case '%':
if (b == 0) printf("Wynik: dzielenie przez zero!\n");
else printf("Wynik: %d %% %d = %d\n", a, b, a % b);
break;
}
printf("=============================\n");
printf("1 - zmien pierwsza liczbe\n");
printf("2 - zmien druga liczbe\n");
printf("3 - wybierz dzialanie (+ - * / %%)\n");
printf("0 - zakoncz\n");
printf("Wybor: ");
scanf("%d", &opcja);
switch (opcja) {
case 1:
printf("Nowa pierwsza liczba: ");
scanf("%d", &a);
break;
case 2:
printf("Nowa druga liczba: ");
scanf("%d", &b);
break;
case 3:
printf("Dzialanie: ");
scanf(" %c", &dzialanie);
if (dzialanie != '+' && dzialanie != '-' && dzialanie != '*'
&& dzialanie != '/' && dzialanie != '%') {
printf("Nieznane dzialanie, ustawiam +\n");
dzialanie = '+';
}
break;
case 0:
printf("Koniec programu.\n");
break;
default:
printf("Nie ma takiej opcji!\n");
}
} while (opcja != 0);
return 0;
}
