#include <stdio.h>

int main(void){
    int k, n, m, x, y;

    while(1){
        scanf("%d", &k);

        if(k == 0)break;

        scanf("%d %d", &n, &m);

        for(int i = 0; i < k; i++){
            scanf("%d %d", &x, &y);

            if(x == n || y == m){
                printf("divisa\n"); // sobre os eixos
            }else if(x > n && y > m){
                printf("NE\n"); // 1º quadrante
            }else if(x < n && y > m){
                printf("NO\n"); // 2º quadrante
            }else if(x < n && y < m){
                printf("SO\n"); // 3º quadrante
            }else if(x > n && y < m){
                printf("SE\n"); // 4º quadrante
            }
        }
    }

    return 0;
}