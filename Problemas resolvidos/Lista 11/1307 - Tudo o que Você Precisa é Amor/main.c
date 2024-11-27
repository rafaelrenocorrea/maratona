#include <stdio.h>
#include <string.h>

// conversor de binário (em string) p/ inteiro
int btoi(char bin[31]){
    int res = 0;

    for(int i = 0; i < strlen(bin); i++)res = res * 2 + (bin[i] - '0');

    return res;
}

// maior divisor comum
int MDC(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main(void){
    int N; 
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        char bin1[31], bin2[31];
        scanf(" %s %s", bin1, bin2);

        int num1 = btoi(bin1);
        int num2 = btoi(bin2);

        int mdc = MDC(num1, num2);

        if(mdc > 1){
            printf("Pair #%d: All you need is love!\n", i);
        }else printf("Pair #%d: Love is not all you need!\n", i);
    }

    return 0;
}