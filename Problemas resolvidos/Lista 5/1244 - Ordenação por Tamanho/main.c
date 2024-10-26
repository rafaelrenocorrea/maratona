#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h>

int main(void){
    int qtd;
    int n;
    char str[2551]; // 50 * 50 + 50 + 1
    char res[50][51];
    char aux[51];
    char *token;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", str);

        token = strtok(str, " ");
        
        qtd = 0;
        while(token != NULL){
            strcpy(res[qtd], token);

            qtd++;

            token = strtok(NULL, " ");
        }

        // BubbleSort
        for(int j = 0; j < qtd; j++){
            for(int k = 1; k < qtd; k++){
                if(strlen(res[k]) > strlen(res[k - 1])){ // ordena decrescente
                    strcpy(aux, res[k]);
                    strcpy(res[k], res[k - 1]);
                    strcpy(res[k - 1], aux);
                }
            }
        }
        //

        for(int j = 0; j < (qtd - 1); j++){
            printf("%s ", res[j]);
        }
        printf("%s\n", res[qtd - 1]);
    }

    return 0;
}