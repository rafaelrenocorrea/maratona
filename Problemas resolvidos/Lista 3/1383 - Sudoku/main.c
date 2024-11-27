#include <stdio.h>
#include <stdlib.h>

int checkMatrix(int **mat, int min1, int max1, int min2, int max2);

int main(void){
    int n, m;
    int i, j;
    int **mat;
    int vet[9];
    int flag;

    mat = (int**) malloc(sizeof(int*) * 9);
    for(i = 0; i < 9; i++)
        mat[i] = (int*) malloc(sizeof(int) * 9);

    scanf("%d", &n);

    for(m = 0; m < n; m++){
        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++)
                scanf("%d", &mat[i][j]);
        }
    
        flag = 0;

        // verifica as linhas
        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++)
                vet[j] = -1;
            
            for(j = 0; j < 9; j++){
                if(vet[mat[i][j] - 1] == -1){
                    vet[mat[i][j] - 1] = mat[i][j];
                }else flag++;
            }
        }
        //

        // verifica as colunas
        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++)
                vet[j] = -1;
            
            for(j = 0; j < 9; j++){
                if(vet[mat[j][i] - 1] == -1){
                    vet[mat[j][i] - 1] = mat[j][i];
                }else flag++;
            }
        }
        //

        // verifica as sub-matrizes
        flag += checkMatrix(mat, 0, 3, 0, 3);
        flag += checkMatrix(mat, 3, 6, 0, 3);
        flag += checkMatrix(mat, 6, 9, 0, 3);
        flag += checkMatrix(mat, 0, 3, 3, 6);
        flag += checkMatrix(mat, 3, 6, 3, 6);
        flag += checkMatrix(mat, 6, 9, 3, 6);
        flag += checkMatrix(mat, 0, 3, 6, 9);
        flag += checkMatrix(mat, 3, 6, 6, 9);
        flag += checkMatrix(mat, 6, 9, 6, 9);
        //
    
        if(flag == 0){
            printf("Instancia %d\n", m + 1);
            printf("SIM\n");
        }else{
            printf("Instancia %d\n", m + 1);
            printf("NAO\n");
        }
        printf("\n");
    }

    for(i = 0; i < 9; i++)
        free(mat[i]);
    free(mat);

    return 0;
}

int checkMatrix(int **mat, int min1, int max1, int min2, int max2){
    int i, j;
    int vet[9];

    for(i = 0; i < 9; i++)
        vet[i] = i + 1;

    for(i = min1; i < max1; i++){
        for(j = min2; j < max2; j++)
            vet[mat[i][j] - 1] = -1;
    }

    for(i = 0; i < 9; i++){
        if(vet[i] != -1) // se algum número não foi sobrescrito, significa que havia outro número repetido.
            return 1;
    }

    return 0;
}