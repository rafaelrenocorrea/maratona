#include <stdio.h>
#include <string.h>

int main(void){
    int aux = 0;
    char str[1001];

    while(scanf("%s", str) != EOF){
        aux = 0;

        for(int i = 0; i < strlen(str); i++){
            if(str[i] == '(')
                aux++;

            if(str[i] == ')'){
                aux--;

                if(aux < 0)
                    break;
            }
        }

        if(aux == 0){
            printf("correct\n");
        }else printf("incorrect\n");
    }
    
    return 0;
}