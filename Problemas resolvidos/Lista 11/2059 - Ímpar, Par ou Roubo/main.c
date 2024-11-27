#include <stdio.h>

int main(void){
    int soma;
    int p, r, a, j1, j2;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    soma = j1 + j2;

    switch(p){
        case 0: // ímpar
            if(soma % 2 != 0){ // jogador 1 ganha
                if(r == 1 && a == 0){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 1 && a == 1){
                    printf("Jogador 2 ganha!\n");
                }else if(r == 0 && a == 1){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 0 && a == 0){
                    printf("Jogador 1 ganha!\n");
                }
            }else if(soma % 2 == 0){ // jogador 2 ganha
                if(r == 1 && a == 0){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 1 && a == 1){
                    printf("Jogador 2 ganha!\n");
                }else if(r == 0 && a == 1){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 0 && a == 0){
                    printf("Jogador 2 ganha!\n");
                }
            }

            break;

        case 1: // par
            if(soma % 2 == 0){ // jogador 1 ganha
                if(r == 1 && a == 0){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 1 && a == 1){
                    printf("Jogador 2 ganha!\n");
                }else if(r == 0 && a == 1){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 0 && a == 0){
                    printf("Jogador 1 ganha!\n");
                }
            }else if(soma % 2 != 0){ // jogador 2 ganha
                if(r == 1 && a == 0){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 1 && a == 1){
                    printf("Jogador 2 ganha!\n");
                }else if(r == 0 && a == 1){
                    printf("Jogador 1 ganha!\n");
                }else if(r == 0 && a == 0){
                    printf("Jogador 2 ganha!\n");
                }
            }

            break;
    }

    return 0;
}