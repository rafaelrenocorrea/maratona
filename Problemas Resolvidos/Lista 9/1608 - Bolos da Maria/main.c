#include <stdio.h>
#include <stdlib.h>

int main(void){
    int T, D, I, B, Q;
    int soma, cont, idx, qtd, aux, maior;
    int *ingredientes;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d %d %d", &D, &I, &B);

        ingredientes = (int*) malloc(sizeof(int) * I);

        for(int j = 0; j < I; j++)scanf("%d", &ingredientes[j]);
    
        maior = 0;
        for(int j = 0; j < B; j++){
            soma = 0;
            cont = 0;
            
            scanf("%d", &Q);

            for(int k = 0; k < Q; k++){
                scanf("%d %d", &idx, &qtd);

                soma += ingredientes[idx] * qtd;
            }

            aux = soma;
            while(soma <= D){
                cont++;

                soma += aux;
            }

            if(cont > maior){
                maior = cont;
            }
        }

        printf("%d\n", maior);

        free(ingredientes);
    }

    return 0;
}