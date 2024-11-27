#include <stdio.h>

int MDC(int a, int b){
    int temp;
    
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

void imprimeVet(int *vet, int t){
    for(int i = 1; i <= t; i++)printf("%d ", vet[i]);

    printf("\n");
}

int main(void){
    int vet[100001];
    int N, Q;
    int T, A, B, V;

    while(scanf("%d %d", &N, &Q) != EOF){
        for(int i = 1; i <= N; i++)scanf("%d", &vet[i]);

        for(int i = 0; i < Q; i++){
            scanf("%d", &T);

            switch(T){
                case 1:
                    scanf("%d %d %d", &A, &B, &V);

                    for(int j = A; j <= B; j++)vet[j] += V;

                    //imprimeVet(vet, N);

                    break;

                case 2:
                    scanf("%d %d", &A, &B);

                    int res = vet[A];

                    for(int j = A + 1; j <= B; j++){
                        res = MDC(res, vet[j]);
                        if(res == 1)break;
                    }

                    printf("%d\n", res);
                    
                    break;
            }
        }
    }

    return 0;
}