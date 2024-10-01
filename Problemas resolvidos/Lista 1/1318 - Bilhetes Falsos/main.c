#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, m, i, c;
    int *B, *b; // bilhetes

    while(1){
        scanf("%d %d", &n, &m);
        if(n == 0 || m == 0)break;

        b = (int*) malloc(sizeof(int) * n);
        for(i = 1; i <= n; i++)b[i - 1] = i;

        B = (int*) malloc(sizeof(int) * m);
        for(i = 0; i < m; i++)scanf("%d", &B[i]);

        c = 0;
        for(i = 0; i < m; i++){
            if(b[B[i] - 1] == B[i]){
                b[B[i] - 1] = -1;
            }else if(b[B[i] - 1] == -1){
                c++;

                b[B[i] - 1] = -2;
            }else{
                // o bilhete falso já foi identificado
            }
        }

        printf("%d\n", c);

        free(B);
        free(b);
    }
    

    return 0;
}