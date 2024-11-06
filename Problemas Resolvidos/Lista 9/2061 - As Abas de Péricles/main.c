#include <stdio.h>
#include <string.h>

int main(void){
    int N, M;
    char str[7];

    scanf("%d %d", &N, &M);

    for(int i = 0; i < M; i++){
        scanf("%s", str);

        if(strcmp(str, "fechou") == 0){
            N++;
        }else if(strcmp(str, "clicou") == 0){
            N--;
        }
    }

    printf("%d\n", N);

    return 0;
}