#include <stdio.h>

int main(void){
    int n, c, v, t;

    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }

        t = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %d", &c, &v);

            v /= 2;

            t += v;
        }

        t /= 2;

        printf("%d\n", t);
    }

    return 0;
}