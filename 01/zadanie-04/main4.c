#include <stdio.h>
int main(){
    int pierwszaliczba;
    int drugaliczba;
    int trzecialiczba;
    scanf("%d %d %d", &pierwszaliczba, &drugaliczba, &trzecialiczba);
    printf("Suma trzech liczb:%d\n", pierwszaliczba + drugaliczba + trzecialiczba);
    printf("Różnica dwoch liczb:%d\n", pierwszaliczba - drugaliczba);
    printf("Iloczyn dwoch liczb:%d\n", pierwszaliczba * trzecialiczba);
    printf("Iloraz dwoch liczb:%.2f\n", (double)trzecialiczba / drugaliczba);
    return 0;
}