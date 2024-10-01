#include <stdio.h>

int main(void){
    long long int res, aux;
    int x, y;

    while(scanf("%d %d", &x, &y) != EOF){
        res = 1;
        if(x > 0)for(int i = x; i >= 1; i--)res *= i;
        aux = res;

        res = 1;
        if(y > 0)for(int i = y; i >= 1; i--)res *= i;
        res += aux;

        printf("%lld\n", res);
    }

    return 0;
}