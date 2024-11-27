#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    int i, j;
    char cpf[15];
    int num[11];
    int aux;

    while(scanf("%s", cpf) != EOF){
        aux = 0;
        j = 0;
        for(i = 0; i < 15; i++){
            if(isdigit(cpf[i])){
                num[j] = cpf[i] - 48;

                aux += num[j];

                j++;
            }
        }

        /*aux %= 11;
        if(aux == 10)
            aux = 0;
        if(aux != 0){
            printf("CPF invalido\n");

            continue;
        }*/

        aux = 0;
        for(i = 0; i < 9; i++)
            aux += (num[i] * (i + 1));

        aux %= 11;
        if(aux == 10)
            aux = 0;
        if(num[9] != aux){
            printf("CPF invalido\n");

            continue;
        }   

        aux = 0;
        j = 0;
        for(i = 8; i >= 0; i--){
            aux += (num[j] * (i + 1));
            
            j++;
        }

        aux %= 11;
        if(aux == 10)
            aux = 0;
        if(num[10] != aux){
            printf("CPF invalido\n");

            continue;
        }

        printf("CPF valido\n");
    }

    return 0;
}