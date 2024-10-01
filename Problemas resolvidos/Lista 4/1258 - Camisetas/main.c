#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h>

typedef struct camiseta{
    char aluno[51];
    char cor[9];
    char tamanho;
}Camiseta;

int comparaCor(const void *a, const void *b);

int comparaTamanho(const void *a, const void *b);

int comparaAluno(const void *a, const void *b);

int main(){
    int n;
    int aux = 0; // pretty printing

    Camiseta *lote;

    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;

        if(aux == 0){
            aux++;
        }else printf("\n");

        lote = (Camiseta*) malloc(sizeof(Camiseta) * n);

        for(int i = 0; i < n; i++){
            scanf(" %[^\n]", lote[i].aluno);

            scanf(" %s", lote[i].cor);

            scanf(" %c", &lote[i].tamanho);
        }

        qsort(lote, n, sizeof(Camiseta), comparaAluno);

        qsort(lote, n, sizeof(Camiseta), comparaTamanho);

        qsort(lote, n, sizeof(Camiseta), comparaCor);

        for(int i = 0; i < n; i++)
            printf("%s %c %s\n", lote[i].cor, lote[i].tamanho, lote[i].aluno);

        free(lote);
    }

    return 0;
}

int comparaCor(const void *a, const void *b) {
    Camiseta *camisetaA = (Camiseta*)a;
    Camiseta *camisetaB = (Camiseta*)b;

    return strcmp(camisetaA->cor, camisetaB->cor);
}

int comparaTamanho(const void *a, const void *b) {
    Camiseta *camisetaA = (Camiseta*)a;
    Camiseta *camisetaB = (Camiseta*)b;

    return camisetaB->tamanho - camisetaA->tamanho; // ordem inversa para que 'P' < 'M' < 'G'
}

int comparaAluno(const void *a, const void *b) {
    Camiseta *camisetaA = (Camiseta*)a;
    Camiseta *camisetaB = (Camiseta*)b;

    return strcmp(camisetaA->aluno, camisetaB->aluno);
}