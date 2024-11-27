#include <stdio.h>
#include <stdlib.h>

struct bota{
    int tam;
    char pe;
}typedef(Bota);

int main(){
    int n, qtd;
    Bota *vet;

    while(scanf("%d", &n) != EOF){
        qtd = 0;

        vet = (Bota*) malloc(sizeof(Bota) * n);

        for(int i = 0; i < n; i++){
            scanf("%d %c", &vet[i].tam, &vet[i].pe);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if((vet[i].tam != -1) && (vet[j].tam != -1)){
                    if((vet[i].tam == vet[j].tam) && (vet[i].pe != vet[j].pe)){
                        vet[i].tam = -1;
                        vet[j].tam = -1;

                        qtd++;
                    }
                }
            }

            for(int j = (i + 1); j < n; j++){
                if((vet[i].tam != -1) && (vet[j].tam != -1)){
                    if((vet[i].tam == vet[j].tam) && (vet[i].pe != vet[j].pe)){
                        vet[i].tam = -1;
                        vet[j].tam = -1;

                        qtd++;
                    }
                }
            }
        }

        printf("%d\n", qtd);

        free(vet);
    }

    return 0;
}