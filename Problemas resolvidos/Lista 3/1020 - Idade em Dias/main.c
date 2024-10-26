#include <stdio.h>

int main(void){
    int dia, mes = 0, ano = 0;

    scanf("%d", &dia);

    while(dia >= 365){
        dia -= 365;
        ano++;
    }

    while(dia >= 30){
        dia -= 30;
        mes++;
    }

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}