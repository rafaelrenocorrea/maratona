#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int *divd, *divs; // dividendo e divisor
    int Sdivd; // soma dos dividendos
    int mmc;
    int qtd; // quantidade de compassos corretos
    char str[201];
    char *token;

    while(1){
        scanf(" %[^\n]", str);
        if(strcmp(str, "*") == 0){
            break;
        }

        qtd = 0;

        token = strtok(str, "/");
        while(token != NULL){
            divd = (int*) malloc(sizeof(int) * strlen(token));
            divs = (int*) malloc(sizeof(int) * strlen(token));
            mmc = 1;

            for(int i = 0; i < strlen(token); i++){
                divd[i] = 1;
                switch(token[i]){
                    case 'W':
                        divs[i] = 1;

                        break;

                    case 'H':
                        divs[i] = 2;
                        if(divs[i] > mmc){
                            mmc = divs[i];
                        }

                        break;

                    case 'Q':
                        divs[i] = 4;
                        if(divs[i] > mmc){
                            mmc = divs[i];
                        }

                        break;

                    case 'E':
                        divs[i] = 8;
                        if(divs[i] > mmc){
                            mmc = divs[i];
                        }

                        break;

                    case 'S':
                        divs[i] = 16;
                        if(divs[i] > mmc){
                            mmc = divs[i];
                        }

                        break;

                    case 'T':
                        divs[i] = 32;
                        if(divs[i] > mmc){
                            mmc = divs[i];
                        }

                        break;

                    case 'X':
                        divs[i] = 64;
                        if(divs[i] > mmc){
                            mmc = divs[i];
                        }

                        break;
                }
            }

            Sdivd = 0;
            for(int i = 0; i < strlen(token); i++){
                divd[i] *= (mmc / divs[i]);

                Sdivd += divd[i];
            }

            if(Sdivd == mmc){
                qtd++;
            }

            token = strtok(NULL, "/");
        }

        printf("%d\n", qtd);
    }

    return 0;
}