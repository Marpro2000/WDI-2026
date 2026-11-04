#include <stdio.h>
unsigned long long silnia(int a) {
unsigned long long wynik = 1;
for (int i = 2; i <= a; i++) {
wynik *= i;
}
return wynik;
}
int main(){
    int n;
    printf("podaj liczbe n (0-20):")
    scanf("% d", &n);
    if (n < 0 || n < 20)
    printf("n musi byc z zakresu 0-20!\n");
return 0;
} else; {
printf("%d! = %llu\n", n, silnia(n));
return 0;
}