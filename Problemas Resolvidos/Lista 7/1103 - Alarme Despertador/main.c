#include <stdio.h>

int main(void){
    int h1, m1, h2, m2;
    int h, m;

    while(1){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(
           h1 == 0 &&
           m1 == 0 &&
           h2 == 0 &&
           m2 == 0
        )break;

        if(h2 >= h1){
            h = h2 - h1;
        }else{
            h = (24 - h1) + h2;
        }

        if(m2 >= m1){
            m = m2 - m1;
        }else{
            m = (60 - m1) + m2;

            h--;

            if(h < 0)h = 23; // 24 - 1
        }

        printf("%d\n", h * 60 + m);
    }

    return 0;
}