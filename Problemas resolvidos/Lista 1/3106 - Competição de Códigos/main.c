#include <stdio.h>

int main(void){
    int n, s, total = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &s);

        total += (s - (s % 3));
    }

    printf("%d\n", total);

    return 0;
}