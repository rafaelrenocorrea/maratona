#include <stdio.h>

int main(void){
    int valor;

    scanf("%d", &valor);

    for(int i = 1; i <= valor; i++){
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, (i * i) + 1, (i * i * i) + 1);
    }

    return 0;
}