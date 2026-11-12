#include <stdio.h>

int floor_moj(double x) {
    int t = (int)x;
    if (x < 0 && x != t) {
        t--;
    }
    return t;
}

int ceiling_moj(double x) {
    int t = (int)x;
    if (x > 0 && x != t) {
        t++;
    }
    return t;
}

int round_moj(double x) {
    if (x >= 0) {
        return (int)(x + 0.5);
    }
    return (int)(x - 0.5);
}

int main(void) {
    double x;
    printf("Podaj liczbe: ");
    scanf("%lf", &x);
    printf("floor   = %d\n", floor_moj(x));
    printf("ceiling = %d\n", ceiling_moj(x));
    printf("round   = %d\n", round_moj(x));
    return 0;
}