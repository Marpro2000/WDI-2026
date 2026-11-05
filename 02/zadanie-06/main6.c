#include <stdio.h>
int main(){
    int miesiac;
    printf("podaj numer miesiaca (1-12): ");
    scanf("%d", &miesiac);

    switch (miesiac) {
        case 1: case 2: case 3:
            printf("I kwartal \n");
        break;
        case 4: case 5: case 6:
            printf("II kwartal \n");
        break;
        case 7: case 8: case 9:
            printf("III kwartal \n");
        break;    
        case 10: case 11: case 12:
            printf("IV kwartal \n");
        break;
        default:
            printf("Blad: nie ma takiego miesiaca %d\n", miesiac);


        
    }
    return 0;
}