#include <stdio.h>
#include <stdlib.h> // qsort()

int compar(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

void imprimeVet(int *vet, int N){
    for(int i = 0; i < N; i++)printf("%d ", vet[i]);
    printf("\n");
}

int main(void){
    int N, K, cont = 0;
    int *vet;

    scanf("%d", &N);
    scanf("%d", &K);

    vet = (int*) malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++)scanf("%d", &vet[i]);

    qsort(vet, N, sizeof(int), compar);

    for(int i = (N - 1); i >= 0; i--){
        if(i < (N - K) + 1){ // a partir do K-ésimo elemento
            cont++;

            if(vet[i] != vet[i - 1])break;
        }else cont++;
    }

    //imprimeVet(vet, N);

    printf("%d\n", cont);

    free(vet);

    return 0;
}