#include <stdio.h>
int main() {
    int ocena1;
    int ocena2;
    int ocena3;
    int ocena4;
    int ocena5;
    scanf("%d %d %d %d %d", &ocena1, &ocena2, &ocena3, &ocena4, &ocena5);
    printf("Srednia ocen:%.2f\n", (double)(ocena1 + ocena2 + ocena3 + ocena4 + ocena5) / 5);
    return 0;
}