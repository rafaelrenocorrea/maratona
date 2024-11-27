#include <stdio.h>
#include <math.h>

#define g 9.80665
#define pi 3.14159

int main(void){
    double h; // altura inicia
    int p1, p2; // Nlogônia
    int n; // iterações
    double a, v; // ângulo e velocidade
    double vx, vy; // componentes x e y da velocidade
    double t; // tempo (até o disparo atingir o chão)
    double d; // distância (x - x0)

    while(scanf("%lf", &h) != EOF){
        scanf("%d %d", &p1, &p2);

        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%lf %lf", &a, &v);

            a *= pi / 180; // converte para radianos

            vx = v * cos(a);
            vy = v * sin(a);

            // bhaskara (deduzi a partir de (s = s0 + (v0 * t) + (a * t²/2)))
            t = (-vy + sqrt((vy * vy) - (4 * (-(g / 2)) * h))) / (-g);
            if(t < 0)t = (-vy - sqrt((vy * vy) - (4 * (-(g / 2)) * h))) / (-g);
            //

            d = vx * t;

            if((d >= p1) && (d <= p2)){
                printf("%.5lf -> DUCK\n", d);
            }else printf("%.5lf -> NUCK\n", d);
        }
    }

    return 0;
}