#include <stdio.h>

int main(void){
    int vet[5];
    int n;
    int aux;

    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;

        for(int i = 0; i < n; i++){
            scanf("%d %d %d %d %d", &vet[0], &vet[1], &vet[2], &vet[3], &vet[4]);

            aux = -1;
            for(int j = 0; j < 5; j++){
                if(vet[j] > 127){
                    // opção em branco
                }else{
                    if(aux == -1){
                        aux = j;
                    }else{
                        aux = -2;
                    }
                }
            }

            if(aux >= 0){
                printf("%c\n", aux + 65);
            }else{
                printf("*\n");
            }
        }
    }

    return 0;
}