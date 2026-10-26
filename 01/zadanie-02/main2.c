#include <stdio.h>
int main() {
double liczba;
printf("podaj liczbe zmiennoprzecinkową. ");
scanf("%lf",&liczba);

printf("1 liczba po przecinku: %.1f\n",liczba );
printf("3 liczba po przecinku: %.3f\n",liczba );
printf("5 liczba po przecinku: %.5f\n",liczba );



    return 0;
}