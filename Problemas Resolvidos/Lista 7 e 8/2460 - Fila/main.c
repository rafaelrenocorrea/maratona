#include <stdio.h>
#include <stdlib.h> // qsort(), bsearch()

int compara(const void *a, const void *b);

int main(void){
    int i;
    int N, M;
    int *fila, *saiu;

    // lê a fila
    scanf("%d", &N);

    fila = (int*) malloc(sizeof(int) * N);
    
    for(i = 0; i < N; i++)scanf("%d", &fila[i]);
    //

    // lê quem saiu
    scanf("%d", &M);

    saiu = (int*) malloc(sizeof(int) * M);
    
    for(i = 0; i < M; i++)scanf("%d", &saiu[i]);
    //

    // elimina quem saiu da fila (método rápido)
    qsort(saiu, M, sizeof(int), compara); // ordena quem saiu

    for(i = 0; i < N; i++){
        // usa busca binária para verificar se fila[i] está em "saiu"
        if(bsearch(&fila[i], saiu, M, sizeof(int), compara) != NULL){
            fila[i] = -1; // marca a posição como vazia
        }
    }
    //

    i = 0;

    // imprime o 1º elemento
    while(fila[i] == -1)i++; // M < N
    printf("%d", fila[i]); // 1º elemento
    i++;
    //

    // imprime o restante da fila
    while(i < N){
        if(fila[i] != -1)printf(" %d", fila[i]);

        i++;
    }
    printf("\n");
    //

    return 0;
}

int compara(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
