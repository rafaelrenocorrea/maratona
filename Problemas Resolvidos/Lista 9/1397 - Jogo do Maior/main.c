#include <stdio.h>

int main(void){
    int n;
    int a, b;
    int A, B;

    while(1){
        scanf("%d", &n);
        if(n == 0)break;

        A = 0; B = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %d", &a, &b);
            if(a > b){
                A++;
            }else if(b > a){
                B++;
            }
        }

        printf("%d %d\n", A, B);
    }

    return 0;
}