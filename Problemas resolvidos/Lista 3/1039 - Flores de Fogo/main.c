#include <stdio.h>
#include <math.h>

int main(void){
    int r1, x1, y1, r2, x2, y2;
    float d;

    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
        d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); // distância entre (x1, y1) e (x2, y2)
        
        if(r1 >= (d + r2)){
            printf("RICO\n");
        }else printf("MORTO\n");
    }

    return 0;
}