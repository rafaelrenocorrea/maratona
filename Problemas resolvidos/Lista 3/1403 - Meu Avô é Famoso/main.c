#include <stdio.h>
#include <stdlib.h>

struct player{
    int num;
    int qtd; // quantas vezes o "num" do jogador aparece no ranking
};

int estaEm(struct player *vet, int tam, int num);
// se "num" estiver no vetor, retorna o índice. caso contrário, retorna -1.

void bubbleSort(struct player *vet, int tam);

int ascending(const void* a, const void* b);

int main(void){
    int i, j, k;
    int n, m;
    int num, aux;
    struct player *ranking;
    int *penultimos;

    while(1){
        scanf("%d %d", &n, &m);

        if(n == 0 || m == 0)
            break;

        ranking = (struct player*) malloc(sizeof(struct player) * (n * m)); // há no máximo n * m jogadores únicos

        k = 0; // recebe a quantidade de jogador ÚNICOS
        for(i = 0; i < n; i++){ // para n linhas,
            for(j = 0; j < m; j++){ // lê m jogadores
                scanf("%d", &num);

                aux = estaEm(ranking, k, num);

                if(aux >= 0){
                    ranking[aux].qtd++;
                }else{
                    ranking[k].num = num;
                    ranking[k].qtd = 1;

                    k++;
                }
            }
        }

        bubbleSort(ranking, k);

        i = (k - 1); 

        // encontra o indice do penúltimo
        while(i > 0 && (ranking[i].qtd == ranking[i - 1].qtd))
            i--;

        penultimos = (int*) malloc(sizeof(int) * i); // aloca um vetor para os penúltimos (a fim de imprimir ordenado)

        i--;
        //

        j = 0;
        if(i > 0){
            while(1){
                penultimos[j] = ranking[i].num;

                if(i == 0 || ranking[i].qtd != ranking[i - 1].qtd){ // até que o anterior seja diferente (antepenúltimo)
                    j++;
                    
                    break;
                }

                i--;
                j++;
            }
        }else{ // no caso de não haver penúltimo
            while(i < k || ranking[i].qtd != ranking[i + 1].qtd){
                penultimos[j] = ranking[i].num;
                j++;
            }
        }

        qsort(penultimos, j, sizeof(int), ascending);

        for(i = 0; i < j; i++)
            printf("%d ", penultimos[i]);

        printf("\n");

        free(ranking);
    }

    return 0;
}

int estaEm(struct player *vet, int tam, int num){
    for(int i = 0; i < tam; i++){
        if(vet[i].num == num)
            return i;
    }

    return -1;
}

void bubbleSort(struct player *vet, int tam){
    struct player aux;

    for(int i = 0; i < tam; i++){
        for(int j = 1; j < tam; j++){
            if(vet[j].qtd < vet[j - 1].qtd){ // também ascendente
                aux = vet[j];
                vet[j] = vet[j - 1];
                vet[j - 1] = aux;
            }
        }
    }
}

int ascending(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}