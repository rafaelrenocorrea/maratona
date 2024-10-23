#include <stdio.h>
#include <stdlib.h>

struct piloto{
    int id;
    int pontos;
}typedef(Piloto);

int compare(const void *a, const void *b);

int main(void){
    int i, j, k;
    int G, P, S, K;
    int **mat; // corridas
    int *vet; // sistema de pontuação
    Piloto *tabela;

    while(1){
        scanf("%d %d", &G, &P);
        if(G == 0 && P == 0)break;

        // inicia a tabela de pilotos
        tabela = (Piloto*) malloc(sizeof(Piloto) * P);

        // preenche a matriz de corridas
        mat = (int**) malloc(sizeof(int*) * G);
        for(i = 0; i < G; i++)mat[i] = (int*) malloc(sizeof(int) * P);

        for(i = 0; i < G; i++){
            for(j = 0; j < P; j++){
                scanf("%d", &k);

                mat[i][k - 1] = j + 1;
            }
        }
        //

        scanf("%d", &S);
        for(i = 0; i < S; i++){
            scanf("%d", &K);

            // preenche o vetor de sistema de pontuação
            vet = (int*) malloc(sizeof(int) * K);

            for(j = 0; j < K; j++)scanf("%d", &vet[j]);
            //

            // reinicia a tabela de pilotos
            for(j = 0; j < P; j++)tabela[j].id = j + 1;
            for(j = 0; j < P; j++)tabela[j].pontos = 0;

            // preenche a tabela com as pontuações
            for(j = 0; j < G; j++){
                for(k = 0; k < K; k++)tabela[mat[j][k] - 1].pontos += vet[k];
            }

            // ordena a tabela de pilotos
            qsort(tabela, P, sizeof(Piloto), compare);
            //printf("Tabela: ");
            //for(j = 0; j < K; j++)printf("%d:%d ", tabela[j].id, tabela[j].pontos);
            //printf("\n");

            // imprime os vencedores
            j = 0;
            while(1){
                printf("%d", tabela[j].id);

                j++;

                if(tabela[j].pontos == tabela[j - 1].pontos){
                    printf(" ");
                }else break;
            }
            printf("\n");
            //

            free(vet); // libera o vetor de sistema de pontuação
        }

        // libera a matriz de corridas
        for(i = 0; i < G; i++)free(mat[i]);
        free(mat);
        //

        free(tabela);
    }

    return 0;
}

int compare(const void *a, const void *b){
    return (*(Piloto*)b).pontos - (*(Piloto*)a).pontos;
}