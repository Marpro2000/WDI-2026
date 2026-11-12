#include <stdio.h>
int suma_cyfr(int n){
    if (n == 0) {
        return 0;
    }
    return n % 10 + suma_cyfr(n/10);
}
int main(void){
int n;
printf("podaj liczbe całkowita nieujemna");
scanf("%d", &n);
if (n < 0 ) {
    printf("liczba musi byc nieujemna!\n");
    return 0;
}
printf("suma_cyfr(%d) = %d\n", n, suma_cyfr(n));
return 0;
}