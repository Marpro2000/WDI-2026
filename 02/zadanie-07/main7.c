#include <stdio.h>
int main(){
    const unsigned granica = 20U;
    unsigned suma = 0;
    for(usigned i = 1U; i<= granica; i++) {
        if (i % 3 == 0){
            suma =+ i;
        }
    }
    printf("suma od 1 do %u podzielnych przez 3 wynosi: %u\n", granica, suma);
    




    return 0;
}