#include <stdio.h>

int main(void){
    int N;
    int C = 0, 
        R = 0,
        S = 0;
    int a;
    char t;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d %c", &a, &t);

        switch(t){
            case 'C': C += a; break;
            case 'R': R += a; break;
            case 'S': S += a; break;
        }
    }

    printf("Total: %d cobaias\n", C + R + S);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %%\n", ((float) C / (C + R + S)) * 100);
    printf("Percentual de ratos: %.2f %%\n", ((float) R / (C + R + S)) * 100);
    printf("Percentual de sapos: %.2f %%\n", ((float) S / (C + R + S)) * 100);

    return 0;
}