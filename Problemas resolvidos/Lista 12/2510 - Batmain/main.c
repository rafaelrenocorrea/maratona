#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    char N[26];

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%s", N);

        if(strcmp(N, "Batmain") != 0){
            printf("Y\n");
        }else printf("N\n");
    }

    return 0;
}