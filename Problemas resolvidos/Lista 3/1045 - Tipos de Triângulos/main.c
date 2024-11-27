#include <stdio.h>

void bubbleSort(float *vet);
// bubbleSort "invertido"

int main(void){
    float vet[3];

    scanf("%f %f %f", &vet[0], &vet[1], &vet[2]);

    bubbleSort(vet);

    //printf("A = %f\nB = %f\nC = %f\n", vet[0], vet[1], vet[2]);

    if(vet[0] < (vet[1] + vet[2])){
        if((vet[0] * vet[0]) == ((vet[1] * vet[1]) + (vet[2] * vet[2]))){
            printf("TRIANGULO RETANGULO\n");
        }

        if((vet[0] * vet[0]) > ((vet[1] * vet[1]) + (vet[2] * vet[2]))){
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if((vet[0] * vet[0]) < ((vet[1] * vet[1]) + (vet[2] * vet[2]))){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if((vet[0] == vet[1]) && (vet[1] == vet[2])){
            printf("TRIANGULO EQUILATERO\n");
        }else if((vet[0] == vet[1]) || (vet[1] == vet[2]) || (vet[0] == vet[2])){
            printf("TRIANGULO ISOSCELES\n");
        }
    }else printf("NAO FORMA TRIANGULO\n");

    return 0;
}

void bubbleSort(float *vet){
    float aux;

    for(int i = 0; i < 3; i++){
        for(int j = 1; j < 3; j++){
            if(vet[j] > vet[j - 1]){
                aux = vet[j - 1];
                vet[j - 1] = vet[j];
                vet[j] = aux;
            }
        }
    }
}