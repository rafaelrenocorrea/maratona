#include <stdio.h>
#include <math.h>

int main(void){
    float valor;
    int c; // contador

    scanf("%f", &valor);

    ////////////////////

    printf("NOTAS:\n");

    c = 0;
    while((valor - 100.0) >= 0){ // R$ 100,00
        valor -= 100.0;
        c++;
    }
    printf("%d nota(s) de R$ 100.00\n", c);

    c = 0;
    while((valor - 50.0) >= 0){ // R$ 50,00
        valor -= 50.0;
        c++;
    }
    printf("%d nota(s) de R$ 50.00\n", c);

    c = 0;
    while((valor - 20.0) >= 0){ // R$ 20,00
        valor -= 20.0;
        c++;
    }
    printf("%d nota(s) de R$ 20.00\n", c);

    c = 0;
    while((valor - 10.0) >= 0){ // R$ 10,00
        valor -= 10.0;
        c++;
    }
    printf("%d nota(s) de R$ 10.00\n", c);

    c = 0;
    while((valor - 5.0) >= 0){ // R$ 5,00
        valor -= 5.0;
        c++;
    }
    printf("%d nota(s) de R$ 5.00\n", c);

    c = 0;
    while((valor - 2.0) >= 0){ // R$ 2,00
        valor -= 2.0;
        c++;
    }
    printf("%d nota(s) de R$ 2.00\n", c);

    ////////////////////

    printf("MOEDAS:\n");

    c = 0;
    while((valor - 1.0) >= 0){ // R$ 1,00
        valor -= 1.0;
        c++;
    }
    printf("%d moeda(s) de R$ 1.00\n", c);

    c = 0;
    while((valor - 0.50) >= 0){ // R$ 0,50
        valor -= 0.50;
        c++;
    }
    printf("%d moeda(s) de R$ 0.50\n", c);

    c = 0;
    while((valor - 0.25) >= 0){ // R$ 0,25
        valor -= 0.25;
        c++;
    }
    printf("%d moeda(s) de R$ 0.25\n", c);

    c = 0;
    while((valor - 0.10) >= 0){ // R$ 0,10
        valor -= 0.10;
        c++;
    }
    printf("%d moeda(s) de R$ 0.10\n", c);

    c = 0;
    while((valor - 0.05) >= 0){ // R$ 0,05
        valor -= 0.05;
        c++;
    }
    printf("%d moeda(s) de R$ 0.05\n", c);

    c = 0;
    while((valor - 0.01) >= 0){ // R$ 0,01
        valor -= 0.01;
        c++;
    }

    if(valor >= 0.009){ // corrige imprecisão
        valor = 0;
        c++;
    }
    printf("%d moeda(s) de R$ 0.01\n", c);

    ////////////////////

    return 0;
}