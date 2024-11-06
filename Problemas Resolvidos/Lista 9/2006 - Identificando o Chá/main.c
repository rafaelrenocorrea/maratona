#include <stdio.h>

int main(void){
    int T, c;
    int cont = 0;

    scanf("%d", &T);

    for(int i = 0; i < 5; i++){
        scanf("%d", &c);

        if(c == T)cont++;
    }
    
    printf("%d\n", cont);

    return 0;
}