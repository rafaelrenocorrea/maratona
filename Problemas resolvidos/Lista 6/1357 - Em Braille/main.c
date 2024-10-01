#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct celula{
    char x[3];
    char y[3];
    char z[3];
}typedef(Celula);

int main(void){
    int D;
    char op, letra;
    Celula *celulas;

    while(1){
        scanf("%d", &D);
        if(D == 0){
            break;
        }

        celulas = (Celula*) malloc(sizeof(Celula) * D);

        scanf(" %c", &op);
        switch(op){
            case 'S':
                for(int i = 0; i < D; i++){
                    scanf(" %c", &letra);

                    switch(letra){
                        case '1':
                            strcpy(celulas[i].x, "*.");
                            strcpy(celulas[i].y, "..");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '2':
                            strcpy(celulas[i].x, "*.");
                            strcpy(celulas[i].y, "*.");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '3':
                            strcpy(celulas[i].x, "**");
                            strcpy(celulas[i].y, "..");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '4':
                            strcpy(celulas[i].x, "**");
                            strcpy(celulas[i].y, ".*");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '5':
                            strcpy(celulas[i].x, "*.");
                            strcpy(celulas[i].y, ".*");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '6':
                            strcpy(celulas[i].x, "**");
                            strcpy(celulas[i].y, "*.");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '7':
                            strcpy(celulas[i].x, "**");
                            strcpy(celulas[i].y, "**");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '8':
                            strcpy(celulas[i].x, "*.");
                            strcpy(celulas[i].y, "**");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '9':
                            strcpy(celulas[i].x, ".*");
                            strcpy(celulas[i].y, "*.");
                            strcpy(celulas[i].z, "..");

                            break;

                        case '0':
                            strcpy(celulas[i].x, ".*");
                            strcpy(celulas[i].y, "**");
                            strcpy(celulas[i].z, "..");

                            break;
                    }
                }

                for(int i = 0; i < D - 1; i++){
                    printf("%s ", celulas[i].x);
                }
                printf("%s\n", celulas[D - 1].x);
                for(int i = 0; i < D - 1; i++){
                    printf("%s ", celulas[i].y);
                }
                printf("%s\n", celulas[D - 1].y);
                for(int i = 0; i < D - 1; i++){
                    printf("%s ", celulas[i].z);
                }
                printf("%s\n", celulas[D - 1].z);

                break;

            case 'B':
                for(int i = 0; i < D; i++){
                    scanf("%s", celulas[i].x);
                }
                for(int i = 0; i < D; i++){
                    scanf("%s", celulas[i].y);
                }
                for(int i = 0; i < D; i++){
                    scanf("%s", celulas[i].z);
                }

                for(int i = 0; i < D; i++){
                    if(strcmp(celulas[i].x, "*.") == 0 && strcmp(celulas[i].y, "..") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("1");
                    }else if(strcmp(celulas[i].x, "*.") == 0 && strcmp(celulas[i].y, "*.") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("2");
                    }else if(strcmp(celulas[i].x, "**") == 0 && strcmp(celulas[i].y, "..") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("3");
                    }else if(strcmp(celulas[i].x, "**") == 0 && strcmp(celulas[i].y, ".*") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("4");
                    }else if(strcmp(celulas[i].x, "*.") == 0 && strcmp(celulas[i].y, ".*") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("5");
                    }else if(strcmp(celulas[i].x, "**") == 0 && strcmp(celulas[i].y, "*.") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("6");
                    }else if(strcmp(celulas[i].x, "**") == 0 && strcmp(celulas[i].y, "**") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("7");
                    }else if(strcmp(celulas[i].x, "*.") == 0 && strcmp(celulas[i].y, "**") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("8");
                    }else if(strcmp(celulas[i].x, ".*") == 0 && strcmp(celulas[i].y, "*.") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("9");
                    }else if(strcmp(celulas[i].x, ".*") == 0 && strcmp(celulas[i].y, "**") == 0 && strcmp(celulas[i].z, "..") == 0){
                        printf("0");
                    }
                }

                printf("\n");

                break;
        }

        free(celulas);
    }

    return 0;
}