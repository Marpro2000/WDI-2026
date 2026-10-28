#include <stdio.h>
int main() {
    int a,b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d" &a, &b);
    if (b==0) {
        printf("Nie dzielimy przez 0 \n");}
        else if(a % b == 0) {
            printf("%d nie jest podzielne przez %d\n", a, b);
        }
         else {
        printf("%d nie jest podzielne przez %d\n", a, b);
    }
     
        
    

    return 0;
}