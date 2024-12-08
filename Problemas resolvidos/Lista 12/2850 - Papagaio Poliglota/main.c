#include <stdio.h>
#include <string.h>

int main(void){
    char str[9];

    while(scanf(" %[^\n]", str) != EOF){
        if(strcmp(str, "esquerda") == 0){
            printf("ingles\n");
        }else if(strcmp(str, "direita") == 0){
            printf("frances\n");
        }else if(strcmp(str, "nenhuma") == 0){
            printf("portugues\n");
        }else if(strcmp(str, "as duas") == 0){
            printf("caiu\n");
        }
    }

    return 0;
}