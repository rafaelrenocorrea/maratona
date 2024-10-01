#include <stdio.h>

int main(void){
    int x, y;

    scanf("%d %d", &x, &y);

    if(y > x){
        printf("O JOGO DUROU %d HORA(S)\n", y - x);
    }else{
        printf("O JOGO DUROU %d HORA(S)\n", (24 - x) + y);
    }

    return 0;
}