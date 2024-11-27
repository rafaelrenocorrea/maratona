#include <stdio.h>
#include <stdlib.h> // mallos(), qsort()
#include <string.h> // strcpy

struct jogador{
    char nome[16];
    int pontos;
}typedef(Jogador);

int compar(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

// comparação com base nos pontos
int comparJogadores(const void *a, const void *b) {
    int pontos_a = ((Jogador*)a)->pontos;
    int pontos_b = ((Jogador*)b)->pontos;
    
    if(pontos_a != pontos_b){
        return pontos_a - pontos_b;
    }else{ // se as pontuações forem iguais, compara os nomes
        return strcmp(((Jogador*)b)->nome, ((Jogador*)a)->nome);
    }
}

int main(void){
    int J;
    int **pontos;
    char **nomes;
    Jogador *jogadores;
    int soma, cont, T = 1;

    while(1){
        scanf("%d", &J);
        if(J == 0)break;

        jogadores = (Jogador*) malloc(sizeof(Jogador) * J);

        pontos = (int**) malloc(sizeof(int*) * J);
        for(int i = 0; i < J; i++)pontos[i] = (int*) malloc(sizeof(int) * 12);

        nomes = (char**) malloc(sizeof(char*) * J);
        for(int i = 0; i < J; i++)nomes[i] = (char*) malloc(sizeof(char) * 16);

        ////////////////////

        for(int i = 0; i < J; i++){
            scanf("%s", nomes[i]);

            for(int j = 0; j < 12; j++)scanf("%d", &pontos[i][j]);

            qsort(pontos[i], 12, sizeof(int), compar);

            strcpy(jogadores[i].nome, nomes[i]);

            soma = 0;
            for(int j = 1; j < 11; j++){
                soma += pontos[i][j];
            }

            jogadores[i].pontos = soma;
        }

        // ordena o vetor de jogadores
        qsort(jogadores, J, sizeof(Jogador), comparJogadores);

        printf("Teste %d\n", T);
        cont = 1; // inicializa a classificação
        int pos = 1; // posição atual no vetor
        for(int i = (J - 1); i >= 0; i--, pos++){
            if(i < (J - 1) && jogadores[i + 1].pontos != jogadores[i].pontos){
                cont = pos;
            }
            printf("%d %d %s\n", cont, jogadores[i].pontos, jogadores[i].nome);
        }
        printf("\n");

        ////////////////////
        
        free(jogadores);
        for(int i = 0; i < J; i++)free(pontos[i]);
        free(pontos);
        for(int i = 0; i < J; i++)free(nomes[i]);
        free(nomes);

        T++; // incrementa o contador de testes
    }

    return 0;
}