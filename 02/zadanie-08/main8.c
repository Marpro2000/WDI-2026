#include <stdio.h>

int max(int a, int b){
    if (a > b) {
        return a;
    }
    return b;
}
int min(int a, int b){
    if (a < b){
        return a;
    } 
    return b;
}
int main(){
    int x,y;

    printf("podaj dwie liczby:")
    scanf("%d %d", &x, &y)
    printf("max(%d, %d) = %d\n", x, y, max(x, y));
    printf("min(%d, %d) = %d\n", x, y, min(x, y));
    return 0;
}

    
    
