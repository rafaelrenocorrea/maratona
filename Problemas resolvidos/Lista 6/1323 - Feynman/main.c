#include <stdio.h>

int main(void){
    int n;

    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }

        int quadrados = 0;

        for(int i = 1; i <= n; i++){
            quadrados += (i * i);
        }

        printf("%d\n", quadrados);
    }

    return 0;
}