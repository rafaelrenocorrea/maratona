#include <stdio.h>
#include <stdlib.h>

// uso: ./main < in.txt > out.txt
int main(void){
    int i, flag;
    char aux;
    char *texto;

    while(1){
        aux = getchar();

        if(aux != '*'){
            texto = (char*) malloc(sizeof(char));
        }else break;

        i = 0;
        while(aux != '\n'){
            texto = (char*) realloc(texto, sizeof(char) * (i + 1));

            texto[i] = aux;

            i++;

            aux = getchar();
        }

        aux = texto[0];
        flag = 0;
        for(int j = 1; j < i; j++){
            if(texto[j] == ' '){
                if(texto[j + 1] >= 65 && texto[j + 1] <= 90){
                    if(texto[j + 1] != aux && (texto[j + 1] + 32) != aux)flag++; 
                }else if(texto[j + 1] >= 97 && texto[j + 1] <= 122){
                    if(texto[j + 1] != aux && (texto[j + 1] - 32) != aux)flag++; 
                }else return 1;
            }
        }

        if(flag == 0){
            printf("Y\n");
        }else printf("N\n");

        free(texto);
    }

    return 0;
}