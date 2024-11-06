#include <stdio.h>

int main(void){
    int A1, A2, A3;
    int menor;

    scanf("%d %d %d", &A1, &A2, &A3);

    menor = A2 * 2 + A3 * 4; // 1º andar

    if((A1 * 2 + A3 * 2) < menor){ // 2º andar
        menor = A1 * 2 + A3 * 2;
    }

    if((A1 * 4 + A2 * 2) < menor){ // 3º andar
        menor = A1 * 4 + A2 * 2;
    }

    printf("%d\n", menor);

    return 0;
}