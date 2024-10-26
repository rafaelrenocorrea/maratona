#include <stdio.h>

int main(void){
    int h, m;

    while(scanf("%d %d", &h, &m) != EOF){
        h /= 30; // h /= (360 / 12);

        m /= 6; // m /= (360 / 60);

        if(h >= 10 && m >= 10){
            printf("%d:%d\n", h, m);
        }else if(h >= 10 && m < 10){
            printf("%d:0%d\n", h, m);
        }else if(h < 10 && m >= 10){
            printf("0%d:%d\n", h, m);
        }else if(h < 10 && m < 10){
            printf("0%d:0%d\n", h, m);
        }
    }

    return 0;
}