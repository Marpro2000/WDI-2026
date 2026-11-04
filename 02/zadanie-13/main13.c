#include <stdio.h>
unsigned long long fib_rek(int n) {
if (n == 0) return 0;
if (n == 1) return 1;
return fib_rek(n - 1) + fib_rek(n - 2);
}
int main() {
int n;
printf("Podaj n (0-90): ");
scanf("%d", &n);
if (n < 0 || n > 90) {
printf("n poza zakresem!\n");
return 0;
}
printf("F(%d) = %llu\n", n, fib(n));
if (n <= 30) {
printf("(rekurencyjnie: %llu)\n", fib_rek(n));
}
return 0;
}