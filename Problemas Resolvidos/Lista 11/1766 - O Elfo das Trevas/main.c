#include <stdio.h>
#include <stdlib.h> // malloc(), qsort()
#include <string.h> // strcmp()

struct rena{
    char nome[101];
    int peso, idade;
    float altura;
}typedef(Rena);

int compara_renas(const void *a, const void *b) {
    Rena *renaA = (Rena *)a;
    Rena *renaB = (Rena *)b;

    // ordenação decrescente por peso
    if (renaB->peso != renaA->peso)
        return renaB->peso - renaA->peso;

    // ordenação crescente por idade
    if (renaA->idade != renaB->idade)
        return renaA->idade - renaB->idade;

    // ordenação crescente por altura
    if (renaA->altura != renaB->altura)
        return (renaA->altura < renaB->altura) ? -1 : 1;

    // ordenação alfabética por nome
    return strcmp(renaA->nome, renaB->nome);
}

int main(void){
    Rena *treno = NULL;

    int T, N, M;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d %d", &N, &M);

        treno = (Rena*) malloc(sizeof(Rena) * N);

        for(int j = 0; j < N; j++){
            scanf("%s %d %d %f", &treno[j].nome, &treno[j].peso, &treno[j].idade, &treno[j].altura);
        }

        qsort(treno, N, sizeof(Rena), compara_renas);

        printf("CENARIO {%d}\n", i + 1);
        for(int j = 0; j < M; j++){
            printf("%d - %s\n", j + 1, treno[j].nome);
        }

        free(treno);
    }



    return 0;
}