#include <bits/stdc++.h>

using namespace std;

int main(void){
    const double c = 3e8, lambda = 700;
    int V;

    cin >> V;

    double lambdaAparente = lambda * sqrt((c - V) / (c + V));

    if(lambdaAparente < 400){
        printf("invisivel\n");
    }else if(lambdaAparente >= 400 && lambdaAparente < 425){
        printf("violeta\n");
    }else if(lambdaAparente >= 425 && lambdaAparente < 445){
        printf("anil\n");
    }else if(lambdaAparente >= 445 && lambdaAparente < 500){
        printf("azul\n");
    }else if(lambdaAparente >= 500 && lambdaAparente < 575){
        printf("verde\n");
    }else if(lambdaAparente >= 575 && lambdaAparente < 585){
        printf("amarelo\n");
    }else if(lambdaAparente >= 585 && lambdaAparente < 620){
        printf("laranja\n");
    }else if(lambdaAparente >= 620 && lambdaAparente < 750){
        printf("vermelho\n");
    }else{
        printf("invisivel\n");
    }

    return 0;
}