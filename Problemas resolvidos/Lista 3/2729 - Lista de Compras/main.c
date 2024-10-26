#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vemAntes(char ant[21], char prox[21]);
// se o anterior vem antes do próximo, retorna 0. Se não, retorna 1.

int main(void){
    int i, j, k;
    int flag;
    char *token;
    char palavra[21];
    char linha[21000]; // 21 KB
    char mat[1000][21]; // 21 KB 
    int n;

    scanf("%d", &n);

    for(int m = 0; m < n; m++){
        scanf(" %[^\n]", linha);

        // elimina as palavras repetidas
        i = 0;
        token = strtok(linha, " ");
        while(token != NULL){
            strcpy(palavra, token);

            flag = 0;
            for(j = 0; j < i; j++){
                if(strcmp(mat[j], palavra) == 0)
                    flag++;
            }

            if(flag > 0){
                // é item repetido
            }else{
                strcpy(mat[i], palavra);

                i++;
            }

            token = strtok(NULL, " ");
        }
        //

        // ordena a matriz (BubbleSort)
        for(j = 0; j < i; j++){
            for(k = 1; k < i; k++){
                if(vemAntes(mat[k - 1], mat[k]) == 1){
                    strcpy(palavra, mat[k]);
                    strcpy(mat[k], mat[k - 1]);
                    strcpy(mat[k - 1], palavra);
                }
            }
        }
        //

        for(j = 0; j < i - 1; j++)
            printf("%s ", mat[j]);
        printf("%s\n", mat[j]);
    }

    return 0;
}

int vemAntes(char ant[21], char prox[21]){
    for(int i = 0; i < 21; i++){
        if(ant[i] == prox[i]){
            // verifica o próximo caractere
        }else if(ant[i] < prox[i]){
            return 0;
        }else{
            return 1;
        }
    }

    return 0; // as palavras são iguais (nunca acontece!)
}