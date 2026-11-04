#include <stdio.h>
int main(){
    int n, suma = 0;
    printf("podaj liczbe :" n);
    scanf("%d", &n);

    if (n<1 || n>100){
        printf("liczba jest poza zakresem" &n);
    }

    for (int i = 1; i<=n ; i++)
      suma += i*i;

    return 0;
}