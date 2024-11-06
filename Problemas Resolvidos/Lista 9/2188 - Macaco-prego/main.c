#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    int i;
    int cont = 1;
    int N;
    int **mat; // matriz de coordenadas
    int X, Y; // canto superior esquerdo
    int U, V; // canto inferior direito

    while(true){
        scanf("%d", &N);
        if(N == 0)break;

        mat = (int**) malloc(sizeof(int*) * N);
        for(i = 0; i < N; i++)mat[i] = (int*) malloc(sizeof(int) * 4);

        for(i = 0; i < N; i++){
            scanf("%d %d %d %d", &mat[i][0], &mat[i][1], &mat[i][2], &mat[i][3]);
        }

        // X
        for(i = 0; i < N; i++){
            if(i == 0){
                X = mat[i][0];
            }else{
                if(mat[i][0] > X)X = mat[i][0];
            }
        }
        //

        // Y
        for(i = 0; i < N; i++){
            if(i == 0){
                Y = mat[i][1];
            }else{
                if(mat[i][1] < Y)Y = mat[i][1];
            }
        }
        //

        // U
        for(i = 0; i < N; i++){
            if(i == 0){
                U = mat[i][2];
            }else{
                if(mat[i][2] < U)U = mat[i][2];
            }
        }
        //

        // V
        for(i = 0; i < N; i++){
            if(i == 0){
                V = mat[i][3];
            }else{
                if(mat[i][3] > V)V = mat[i][3];
            }
        }
        //

        printf("Teste %d\n", cont);
        
        if(X < U && Y > V){
            printf("%d %d %d %d\n", X, Y, U, V);
        }else{
            printf("nenhum\n");
        }

        printf("\n");

        cont++;

        free(mat);
    }

    return 0;
}