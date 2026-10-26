#include <stdio.h>
int main(){
    int sekundy,minuty,godziny;
    printf("podaj liczbe sekund: ");
    scanf("%d", &sekundy);
    minuty = sekundy / 60;
    godziny = minuty /60;
    minuty = minuty % 60;     
    sekundy = sekundy % 60;

    printf("%d h %d min %d sec s\n", godziny, minuty, sekundy);
    return 0;
}