#include <stdio.h>
#include <string.h>

int main(void){
    int flag;
    int n;
    char linha[51];
    char *token;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", linha);

        token = strtok(linha, " ");

        while(token != NULL){
            printf("%c", token[0]);

            token = strtok(NULL, " ");
        }

        printf("\n");
    }

    return 0;
}