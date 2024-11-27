#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verificaVitoria(int ***tabuleiro, int n, int jogador){
    bool flag;

    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            for(int z = 0; z < n; z++){
                // LINHAS (EIXO X)
                if(x == 0){
                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][y][z] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;
                }

                // COLUNAS (EIXO Y)
                if(y == 0){
                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[x][i][z] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;
                }

                // NÍVEIS (EIXO Z)
                if(z == 0){
                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[x][y][i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;
                }

                // DIAGONAIS NO PLANO XY
                if(x == 0 && y == 0){
                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][i][z] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;

                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][n - 1 - i][z] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;
                }

                // DIAGONAIS NO PLANO XZ
                if(x == 0 && z == 0){
                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][y][i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;

                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][y][n - 1 - i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;
                }

                // DIAGONAIS NO PLANO YZ
                if(y == 0 && z == 0){
                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[x][i][i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;

                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[x][i][n - 1 - i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;
                }

                // DIAGONAIS NO ESPAÇO XYZ
                if(x == 0 && y == 0 && z == 0){
                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][i][i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;

                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][i][n - 1 - i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;

                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][n - 1 - i][i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;

                    flag = true;
                    for(int i = 0; i < n; i++){
                        if(tabuleiro[i][n - 1 - i][n - 1 - i] != jogador){
                            flag = false;

                            break;
                        }
                    }
                    if(flag)return true;
                }
            }
        }
    }

    return false;
}

// verificação de vitória otimizada
bool verificaVitoria2(int ***tabuleiro, int n, int jogador, int x, int y, int z){
    bool flag;

    // LINHA (EIXO X)
    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][y][z] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    // COLUNA (EIXO Y)
    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[x][i][z] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;
    
    // NÍVEL (EIXO Z)
    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[x][y][i] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    // DIAGONAIS NO PLANO XY
    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][i][z] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][n - 1 - i][z] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    // DIAGONAIS NO PLANO XZ
    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][y][i] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][y][n - 1 - i] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    // DIAGONAIS NO PLANO YZ
    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[x][i][i] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[x][i][n - 1 - i] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    // DIAGONAIS NO ESPAÇO XYZ
    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][i][i] != jogador){
            flag = false;
            
            break;
        }
    }
    if(flag)return true;

    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][i][n - 1 - i] != jogador){
            flag = false;

            break;
        }
    }
    if(flag)return true;

    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][n - 1 - i][i] != jogador){
            flag = false;
            
            break;
        }
    }
    if(flag)return true;

    flag = true;
    for(int i = 0; i < n; i++){
        if(tabuleiro[i][n - 1 - i][n - 1 - i] != jogador){
            flag = false;
            
            break;
        }
    }
    if(flag)return true;

    return false;
}

int main(void){
    int n;
    int ***tabuleiro;
    int instancia = 1;
    bool terminou;

    while(true){
        scanf("%d", &n);
        if(n == 0)break;

        terminou = false;

        tabuleiro = (int***) malloc(sizeof(int**) * n);
        for(int i = 0; i < n; i++){
            tabuleiro[i] = (int**) malloc(sizeof(int*) * n);

            for(int j = 0; j < n; j++){
                tabuleiro[i][j] = (int*) malloc(sizeof(int) * n);
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    tabuleiro[i][j][k] = 0;
                }
            }
        }

        ////////////////////

        int x, y;

        for(int i = 0; i < (n * n * n); i++){
            scanf("%d %d", &x, &y);
            x--; y--; // ajusta os índices

            if(terminou)continue; // ignora as outras entradas

            if(i % 2 == 0){ // vez do branco
                int z = 0;

                while(tabuleiro[x][y][z] > 0)z++;

                tabuleiro[x][y][z] = 1;

                if(verificaVitoria2(tabuleiro, n, 1, x, y, z)){
                    printf("Instancia %d\n", instancia);
                    printf("Branco ganhou\n");

                    terminou = true;
                }
            }else{ // vez do azul
                int z = 0;

                while(tabuleiro[x][y][z] > 0)z++;

                tabuleiro[x][y][z] = 2;

                if(verificaVitoria2(tabuleiro, n, 2, x, y, z)){
                    printf("Instancia %d\n", instancia);
                    printf("Azul ganhou\n");

                    terminou = true;
                }
            }
        }

        if(!terminou){
            printf("Instancia %d\n", instancia);
            printf("Empate\n");
        }

        ////////////////////

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                free(tabuleiro[i][j]);
            }

            free(tabuleiro[i]);
        }
        free(tabuleiro);
    
    instancia++;
    printf("\n");
    }

    return 0;
}