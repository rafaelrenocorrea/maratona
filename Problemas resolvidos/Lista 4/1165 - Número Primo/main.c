#include <stdio.h>

// O(n * x)
int main(void){
    int n, x;
    int flag;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x);

        flag = 0;
        for(int j = 2; j < x; j++){
            if((x % j) == 0) // se é divisível
                flag++;
        }

        if(flag > 0){
            printf("%d nao eh primo\n", x);
        }else printf("%d eh primo\n", x);
    }

    return 0;
}