#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N, cont;
    int *H;

    while(1){
        scanf("%d", &N);
        if(N == 0)break;

        H = (int*) malloc(sizeof(int) * N);

        cont = 0;
        for(int i = 0; i < N; i++){
            scanf("%d", &H[i]);
        }

        for(int i = 0; i < N; i++){
            if(i == 0){ // caso 1º elemento
                if(
                   (
                    H[i] > H[N - 1] && // anterior
                    H[i] > H[i + 1]    // sucessor
                   )
                   ||
                   (
                    H[i] < H[N - 1] &&
                    H[i] < H[i + 1]
                   )
                  )cont++;
            }else if(i == (N - 1)){ // caso último elemento
                if(
                   (
                    H[i] > H[i - 1] &&
                    H[i] > H[0]
                   )
                   ||
                   (
                    H[i] < H[i - 1] &&
                    H[i] < H[0]
                   )
                  )cont++;
            }else{ // caso iº elemento
                if(
                   (
                    H[i] > H[i + 1] &&
                    H[i] > H[i - 1]
                   )
                   ||
                   (
                    H[i] < H[i + 1] &&
                    H[i] < H[i - 1]
                   )
                  )cont++;
            }

        }

        printf("%d\n", cont);

        free(H);
    }

    return 0;
}