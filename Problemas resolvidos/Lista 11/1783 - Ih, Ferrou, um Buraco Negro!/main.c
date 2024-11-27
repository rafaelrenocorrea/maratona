#include <stdio.h>

int main(void){
    int T;                                                 // nº de casos de teste
    double x1_old, x1, y1_old, y1, x2_old, x2, y2_old, y2; // coord. das estrelas
    double X, Y;                                           // coord. do buraco negro
    double m1, m2;                                         // coef. angulares das retas
    double m1_perp, m2_perp;                               // coef. angulares das retas perpendiculares
    double b1_perp, b2_perp;                               // coef. lineares das retas perpendiculares
    double xm1, ym1, xm2, ym2;                             // pontos médios das estrelas

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%lf %lf", &x1_old, &y1_old); // coord. antiga da 1ª estrela
        scanf("%lf %lf", &x2_old, &y2_old); // coord. antiga da 2ª estrela
        scanf("%lf %lf", &x1, &y1);         // coord. nova da 1ª estrela
        scanf("%lf %lf", &x2, &y2);         // coord. nova da 2ª estrela

        // cálculo do ponto médio da 1ª estrela
        xm1 = (x1_old + x1) / 2;
        ym1 = (y1_old + y1) / 2;

        // cálculo do ponto médio da 2ª estrela
        xm2 = (x2_old + x2) / 2;
        ym2 = (y2_old + y2) / 2;

        // cálculo da equação da 1ª reta (y = m * x + b)
        if(x1 != x1_old){
            m1 = (y1 - y1_old) / (x1 - x1_old); // coef. angular da 1ª reta
        }else m1 = 0;  // reta vertical

        if(x2 != x2_old){
            m2 = (y2 - y2_old) / (x2 - x2_old); // coef. angular da 2ª reta
        }else m2 = 0;  // reta vertical

        // cálculo das retas perpendiculares
        // se a reta original for horizontal, a perpendicular será vertical (m_perp = infinito)
        // se a reta original for vertical, a perpendicular será horizontal (m_perp = 0)
        // para a 1ª reta:
        if(m1 == 0){                       // reta original horizontal
            m1_perp = 0;                   // a reta perpendicular será vertical
            b1_perp = xm1;                 // a equação da reta perpendicular será x = xm1
        }else if(m1 == -1.0/0.0){          // reta original vertical
            m1_perp = 0;                   // a reta perpendicular será horizontal
            b1_perp = ym1;                 // a equação da reta perpendicular será y = ym1
        }else{                             // reta não horizontal nem vertical
            m1_perp = -1 / m1;             // coef. angular da reta perpendicular
            b1_perp = ym1 - m1_perp * xm1; // coef. linear da reta perpendicular
        }

        // para a 2ª reta:
        if(m2 == 0){                       // reta original horizontal
            m2_perp = 0;                   // a reta perpendicular será vertical
            b2_perp = xm2;                 // a equação da reta perpendicular será x = xm2
        }else if(m2 == -1.0/0.0){          // reta original vertical
            m2_perp = 0;                   // a reta perpendicular será horizontal
            b2_perp = ym2;                 // a equação da reta perpendicular será y = ym2
        }else{                             // reta não horizontal nem vertical
            m2_perp = -1 / m2;             // coef. angular da reta perpendicular
            b2_perp = ym2 - m2_perp * xm2; // coef. linear da reta perpendicular
        }

        // cálculo da interseção das retas perpendiculares
        if(m1_perp == 0){
            X = b1_perp;
            Y = m2_perp * X + b2_perp;
        }else if (m2_perp == 0){
            X = b2_perp;
            Y = m1_perp * X + b1_perp;
        }else{
            X = (b2_perp - b1_perp) / (m1_perp - m2_perp); // coord. X da interseção
            Y = m1_perp * X + b1_perp;                     // coord. Y da interseção
        }

        printf("Caso #%d: %.2lf %.2lf\n", i, X, Y);
    }

    return 0;
}
