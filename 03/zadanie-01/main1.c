#include <stdio.h>

unsigned long long fib(int n) {
    if (n == 0) return 0;
    unsigned long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        unsigned long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}

unsigned long long suma_fib(int n) {
    unsigned long long suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += fib(i);
    }
    return suma;
}

int main(void) {
    int n;
    printf("Podaj n (0-90): ");
    scanf("%d", &n);
    if (n < 0 || n > 90) {
        printf("n poza zakresem!\n");
        return 0;
    }
    printf("Suma F(0)..F(%d) = %llu\n", n, suma_fib(n));
    return 0;
}