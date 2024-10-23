#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
    int i;
    char c;
    char *buffer;
    int buffer_size;
    bool flag, numero,
               maiuscula,
               minuscula;

    while(true){
        // reinicia os parâmetros
        buffer_size = 32;
        i = 0;
        flag = true;
        numero = false;
        maiuscula = false;
        minuscula = false;
        //

        buffer = (char*) malloc(sizeof(char) * buffer_size);

        while(true){
            c = getchar();

            if(c == '\n' || c == EOF)break;

            buffer[i] = c;
            i++;
            if(i >= buffer_size){
                buffer_size += 32;
                buffer = (char*) realloc(buffer, sizeof(char) * buffer_size);
            }
        }

        // a senha pode ter de 6 a 32 caracteres
        if(i < 6 || i > 32)flag = false;

        // a senha não pode ter nenhum caractere de pontuação, acentuação ou espaço;
        for(int j = 0; j < i; j++){
            if(!isalpha(buffer[j]) && !isdigit(buffer[j]))flag = false;

            if(buffer[j] >= '0' && buffer[j] <= '9'){
                numero = true;
            }else if(buffer[j] >= 'A' && buffer[j] <= 'Z'){
                maiuscula = true;
            }else if(buffer[j] >= 'a' && buffer[j] <= 'z'){
                minuscula = true;
            }   
        }

        // a senha deve conter, no mínimo, uma letra maiúscula, uma letra minúscula e um número
        if(!numero || !maiuscula || !minuscula)flag = false;

        if(flag){
            printf("Senha valida.\n");
        }else printf("Senha invalida.\n");

        free(buffer);

        if(c == EOF)break;
    }

    return 0;
}