#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){ // se é par
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}
