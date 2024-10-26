#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, k, a, flag;
    char c;
    char *lingua, *aux;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        getchar(); // consome o caractere de quebra de linha '\n' que sobra no buffer

        aux = (char*) malloc(sizeof(char) * 21);

        flag = 0;
        for(int j = 0; j < k; j++){
            lingua = (char*) malloc(sizeof(char) * 21);
            
            a = 0;
            while(1){
                c = getchar();

                if(c != '\n' && c != EOF){ // && c != EOF impede segmentation fault
                    lingua[a] = c;

                    if(j > 0){
                        if(aux[a] != lingua[a])flag++; // se difere do anterior (aux), incrementa a flag

                        aux[a] = lingua[a];
                    }else aux[a] = lingua[a];

                    a++;
                }else{
                    lingua[a] = '\0';

                    break;
                }
            }

            if(j < (k - 1))free(lingua); // "limpa" o buffer
        }

        if(flag == 0){
            printf("%s\n", lingua);
        }else{
            printf("ingles\n");
        }

        free(lingua);
        free(aux);
    }

    return 0;
}