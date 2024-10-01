#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, t, qtd;
    int *tiros;
    char *pulos;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &t);

        tiros = (int*) malloc(sizeof(int) * t);
        pulos = (char*) malloc(sizeof(char) * t);

        for(int j = 0; j < t; j++)
            scanf("%d", &tiros[j]);

        for(int j = 0; j < t; j++)
            scanf(" %c", &pulos[j]);

        qtd = 0;
        for(int j = 0; j < t; j++){
            if(((tiros[j] > 2) && (pulos[j] == 'J')) || ((tiros[j] <= 2) && (pulos[j] == 'S')))
                qtd++;
        }

        printf("%d\n", qtd);
    }

    return 0;
}