#include <stdio.h>
#include <stdbool.h>

bool is_prime(long int x){
    if(x <= 1)return false;
    if(x <= 3)return true;
    if(x % 2 == 0 || x % 3 == 0)return false;
    for(long int i = 5; i * i <= x; i += 6){
        if(x % i == 0 || x % (i + 2) == 0)return false;
    }
    return true;
}

int main(void){
    int n;
    long int x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%ld", &x);
        if(is_prime(x)){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }

    return 0;
}

/*
    Teorema Fundamental da Aritmética

    Todo número inteiro positivo pode ser escrito de forma única como um produto de números primos.
*/