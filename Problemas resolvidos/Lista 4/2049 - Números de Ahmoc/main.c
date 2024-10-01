#include <stdio.h>
#include <string.h>

int main(void){
    int i = 1;
    char assinatura[8];
    char numeros[300001];

    while(1){
        scanf("%s", assinatura);

        if(strcmp(assinatura, "0") == 0)
            break;

        scanf("%s", numeros);

        if(i > 1)
            printf("\n");
            
        printf("Instancia %d\n", i);

        if(strstr(numeros, assinatura) != NULL){
            printf("verdadeira\n");
        }else{
            printf("falsa\n");
        }

        i++;
    }

    return 0;
}