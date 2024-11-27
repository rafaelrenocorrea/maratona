#include <stdio.h>

int main(void){
    int t; // tempo (h)
    int v; // velocidade média (km/h)
    float d, l;

    scanf("%d", &t);
    scanf("%d", &v);

    d = t * v;

    l = d / 12;

    printf("%.3f\n", l);

    return 0;
}