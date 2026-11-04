#include <stdio.h>
int main(){
    char znak;
    int a,b;
    printf("podaj dwie liczby:");
    scanf("%d %d", &a, &b);
    printf("podaj znak działania: + - * /");
    scanf(" %c", &znak);
    switch(znak) {
        case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
        case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
        case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
        case '/':
        if (b == 0) {
            printf("Nie dzielimy przez zero!!!\n")
        }
        else {
            printf(" %d / %d = %.2f\n", a, b, (double)a / b);

        }
        break;

    }
    return 0;
}