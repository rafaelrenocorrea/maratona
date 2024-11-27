#include <stdio.h>

int main(void){
    int i = 1;
    int R, N, D;
    int qtd;

    while(1){
        scanf("%d %d", &R, &N);
        if(R == 0 && N == 0)break;

        if(N < R){
            qtd = 0;
            
            while(((N * qtd) + N) < R)qtd++;

            if(qtd <= 26){
                printf("Case %d: %d\n", i, qtd);
            }else{
                printf("Case %d: impossible\n", i);
            }
        }else{
            printf("Case %d: 0\n", i);
        }

        i++;
    }

    return 0;
}