#include <stdio.h>
int main(){
    int a,b,c,d,e;
    int ile=0;
    printf("Podaj piec ocen")
    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("Srednia ocen:%.2f\n", (double)(a + b + c + d + e) / 5);
    if (a==1) ile++;
    if (b==1) ile++;
    if (c==1) ile++;
    if (d==1) ile++;
    if (e==1) ile++;
    printf("Liczb niedostatecznych jest: %d\n", ile);
    return 0;
}