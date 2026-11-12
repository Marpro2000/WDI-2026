#include <stdio.h>

long long f_rek(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return f_rek(n - 1) * f_rek(n - 2) - f_rek(n - 3);
}

long long f_iter(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    long long a = 1, b = 2, c = 3;   /* f(n-3), f(n-2), f(n-1) */
    for (int i = 4; i <= n; i++) {
        long long nowy = c * b - a;
        a = b;
        b = c;
        c = nowy;
    }
    return c;
}

int main(void) {
    int n;
    printf("Podaj n (1-10): ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("n poza zakresem!\n");
        return 0;
    }
    printf("f(%d) = %lld (rekurencyjnie)\n", n, f_rek(n));
    printf("f(%d) = %lld (iteracyjnie)\n", n, f_iter(n));
    return 0;
}