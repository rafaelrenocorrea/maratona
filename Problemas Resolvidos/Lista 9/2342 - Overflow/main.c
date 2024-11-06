#include <stdio.h>

int main(void){
    int N, P, Q;
    char C;

    scanf("%d", &N);

    scanf("%d %c %d", &P, &C, &Q);

    if(C == '+'){
        if(P + Q <= N){
            printf("OK\n");
        }else{
            printf("OVERFLOW\n");
        }
    }else if(C == '*'){
        if(P * Q <= N){
            printf("OK\n");
        }else{
            printf("OVERFLOW\n");
        }
    }

    return 0;
}