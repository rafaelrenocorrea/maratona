#include <stdio.h>
#include <stdlib.h> // qsort()

int ascending(const void* a, const void* b);

int descending(const void* a, const void* b);

int main(void){
    int *pares, *impares;
    int qtd, qtdPares = 0, qtdImpares = 0;
    int i, aux;

    scanf("%d", &qtd);

    pares = (int*) malloc(sizeof(int) * qtd);
    impares = (int*) malloc(sizeof(int) * qtd);

    qtdPares = 0; qtdImpares = 0;
    for(i = 0; i < qtd; i++){
        scanf("%d", &aux);

        if((aux % 2) == 0){
            pares[qtdPares] = aux;

            qtdPares++;
        }else{
            impares[qtdImpares] = aux;

            qtdImpares++;
        }
    }

    qsort(pares, qtdPares, sizeof(int), ascending);

    qsort(impares, qtdImpares, sizeof(int), descending);

    for(i = 0; i < qtdPares; i++)
        printf("%d\n", pares[i]);

    for(i = 0; i < qtdImpares; i++)
        printf("%d\n", impares[i]);

    free(pares);
    free(impares);

    return 0;
}

int ascending(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int descending(const void* a, const void* b){
    return (*(int*)b - *(int*)a);
}

/*
    Sobre a solução:
    
    O 4º argumento da função qsort() é uma referência para uma função de callback 
    para comparar os elementos. Para crescente, deve retornar valor negativo se a < b, 
    valor positivo se a > b e zero se a == b. Assim, uma implementação sofisticada
    para ordenar crescente é return (*(int*)a - *(int*)b); pois, dessa forma, está
    de acordo com os valores de retorno esperados.

    Portanto, para ordenar decrescente, basta inverter a com b, uma vez que irá
    retornar valor positivo se a < b.

    Documentação: https://cplusplus.com/reference/cstdlib/qsort/
*/
