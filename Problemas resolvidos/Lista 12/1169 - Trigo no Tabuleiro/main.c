#include <stdio.h>  
#include <math.h>

int main(void){
    int N, X;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &X);

        printf("%lld kg\n", (unsigned long long int) (pow(2, X) / 12) / 1000);
    }

    return 0;
}