#include <stdio.h>
#include <math.h>

int main(void){
    int T, N;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d", &N);

        printf("%d\n", (int) pow(2, N) - 1);
    }

    return 0;
}