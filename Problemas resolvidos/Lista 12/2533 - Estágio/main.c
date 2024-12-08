#include <stdio.h>

int main(void){
    int M, N, C;
    int numerador, denominador;

    while(scanf("%d", &M) != EOF){
        numerador = 0;
        denominador = 0;

        for(int i = 0; i < M; i++){
            scanf("%d %d", &N, &C);

            numerador += (N * C);

            denominador += (C * 100);
        }

        printf("%.4f\n", (float) numerador / denominador);
    }

    return 0;
}