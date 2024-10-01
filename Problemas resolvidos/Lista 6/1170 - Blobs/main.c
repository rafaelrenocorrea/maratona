#include <stdio.h>

int main(void){
    int n, d;
    float c;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f", &c);

        d = 0;
        while(c > 1){
            c /= 2;

            d++;
        }

        printf("%d dias\n", d);
    }

    return 0;
}
