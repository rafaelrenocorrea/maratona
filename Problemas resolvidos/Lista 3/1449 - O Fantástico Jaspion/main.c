#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int t, m, n;
    int i, j, k, aux;
    char ***dicionario;
    char *linha, *token;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d %d", &m, &n);

        // aloca o dicionário
        dicionario = (char***) malloc(sizeof(char**) * m);

        for(j = 0; j < m; j++)
            dicionario[j] = (char**) malloc(sizeof(char*) * 2);

        for(j = 0; j < m; j++){
            dicionario[j][0] = (char*) malloc(sizeof(char) * 81); // palavra em japonês
            dicionario[j][1] = (char*) malloc(sizeof(char) * 81); // tradução
        }
        //

        // aloca a linha e o token
        linha = (char*) malloc(sizeof(char) * 81);
        token = (char*) malloc(sizeof(char) * 81);
        //

        for(j = 0; j < m; j++){
            scanf(" %[^\n]", dicionario[j][0]);
            scanf(" %[^\n]", dicionario[j][1]);
        }

        for(j = 0; j < n; j++){
            scanf(" %[^\n]", linha);

            aux = 0; // para pretty printing
            token = strtok(linha, " "); // https://cplusplus.com/reference/cstring/strtok/
            while(token != NULL){
                if(aux == 0){
                    aux++;
                }else printf(" ");

                for(k = 0; k < m; k++){
                    if(strcmp(dicionario[k][0], token) == 0){
                        printf("%s", dicionario[k][1]);

                        k = -1;

                        break;
                    }
                }

                if(k == m)
                    printf("%s", token);

                token = strtok(NULL, " ");
            }

            printf("\n");
        }
        printf("\n");

        // libera a linha e o token
        free(linha);
        free(token);
        //

        // libera o dicionário
        for(j = 0; j < m; j++){
            free(dicionario[j][0]);
            free(dicionario[j][1]);
        }

        for(j = 0; j < m; j++)
            free(dicionario[j]);

        free(dicionario);
        //
    }

    return 0;
}