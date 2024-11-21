#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
    int N;
    char nome[43];

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%s", &nome);

        int cont = 0;
        bool flag = false;
        for(int j = 0; j < strlen(nome); j++){
            if(
               tolower(nome[j]) == 'a' ||
               tolower(nome[j]) == 'e' ||
               tolower(nome[j]) == 'i' ||
               tolower(nome[j]) == 'o' ||
               tolower(nome[j]) == 'u'
            ){
                cont = 0;
            }else{
                cont++;

                if(cont >= 3)flag = true;
            }
        }

        if(flag){
            printf("%s nao eh facil\n", nome);
        }else{
            printf("%s eh facil\n", nome);
        }
    }

    return 0;
}