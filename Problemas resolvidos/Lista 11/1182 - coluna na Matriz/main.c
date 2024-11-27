#include <stdio.h>

int main(void){
    float mat[12][12];
    int C;
    char T;
    float soma = 0;

    scanf("%d", &C);
    scanf(" %c", &T);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &mat[i][j]);
        }
    }

    for(int i = 0; i < 12; i++){
        soma += mat[i][C];
    }

    switch(T){
        case 'S':
            printf("%.1f\n", soma);

            break;

        case 'M':
            printf("%.1f\n", soma / 12);

            break;
    }

    return 0;
}