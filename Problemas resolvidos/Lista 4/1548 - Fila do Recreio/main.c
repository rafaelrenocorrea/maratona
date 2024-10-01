#include <stdio.h>
#include <stdlib.h> // qsort()

int descending(const void* a, const void* b);

int main(void){
    int n, m, qtd;
    int *P, *aux;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &m);

        P = (int*) malloc(sizeof(int) * m);
        aux = (int*) malloc(sizeof(int) * m);

        for(int j = 0; j < m; j++){
            scanf("%d", &P[j]);
        
            aux[j] = P[j];
        }

        qsort(P, m, sizeof(int), descending);

        qtd = 0;
        for(int j = 0; j < m; j++){
            if(P[j] == aux[j])
                qtd++;
        }

        printf("%d\n", qtd);
    }

    return 0;
}

int descending(const void* a, const void* b){
    return (*(int*)b - *(int*)a);
}