#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    int N, D, x;
    int *alumni;

    while(1){
        scanf("%d %d", &N, &D);
        if(N == 0 && D == 0)break;

        bool flag = false;

        alumni = (int*) malloc(sizeof(int) * N);
        for(int i = 0; i < N; i++)alumni[i] = 0;

        for(int i = 0; i < D; i++){
            for(int j = 0; j < N; j++){
                scanf("%d", &x);

                alumni[j] += x;
            }
        }

        for(int i = 0; i < N; i++){
            if(alumni[i] == D){
                flag = true;
            }
        }

        if(flag){
            printf("yes\n");
        }else printf("no\n");

        free(alumni);
    }

    return 0;
}