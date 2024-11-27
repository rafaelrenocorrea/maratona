#include <stdio.h>

int main(void){
    int C, N;
    int vet[1000];
    int media, qtd;

    scanf("%d", &C);

    for(int i = 0; i < C; i++){
        scanf("%d", &N);

        media = 0; 
        for(int j = 0; j < N; j++){
            scanf("%d", &vet[j]);
        
            media += vet[j];
        }
        media /= N;

        qtd = 0; // qtd de alunos acima da média
        for(int j = 0; j < N; j++){
            if(vet[j] > media){
                qtd++;
            }
        }

        printf("%.3f%%\n", ((float) qtd / N) * 100);
    }

    return 0;
}