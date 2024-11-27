#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* V, int t);
// O(n²)

int main(void){
    int a, d;
    int *A, *D;

    while(1){
        scanf("%d %d", &a, &d);

        if(a || d){
            // encontra o atacante mais próximo do gol (A[0])
            A = (int*) malloc(sizeof(int) * a);
            for(int i = 0; i < a; i++)scanf("%d", &A[i]);
            bubbleSort(A, a);
            //

            // encontra o penúltimo defensor mais próximo do gol (D[1])
            D = (int*) malloc(sizeof(int) * d);
            for(int j = 0; j < d; j++)scanf("%d", &D[j]);
            bubbleSort(D, d);
            //
        }else break;

        if(A[0] < D[1]){
            printf("Y\n");
        }else printf("N\n");

        free(A);
        free(D);
    }
    
    return 0;
}

void bubbleSort(int* V, int t){
    int aux;

    for(int i = 0; i < t; i++){
        for(int j = 1; j < t; j++){
            if(V[j - 1] > V[j]){
                aux = V[j];
                V[j] = V[j - 1];
                V[j - 1] = aux;
            }
        }
    }
}