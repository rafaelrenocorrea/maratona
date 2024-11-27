#include <stdio.h>

int main(void){
    int n, m;

    scanf("%d %d", &n, &m);

    if(m <= 2){
        printf("nova\n");
    }else if(m > 2 && m <= 96){
        if(n < m){
            printf("crescente\n");
        }else printf("minguante\n");
        
    }else if(m > 96)
        printf("cheia\n");

    return 0;
}