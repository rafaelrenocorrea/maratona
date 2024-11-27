#include <stdio.h>
#include <string.h>

int main(void){
    int N;
    char str[1001];
    int az[26];
    int qtd;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf(" %[^\n]", str);

        memset(az, 0, sizeof(az));

        for(int j = 0; j < strlen(str); j++)if(str[j] - 'a' <= 25)az[str[j] - 'a']++;
    
        qtd = 0;
        for(int j = 0; j < 26; j++){
            //printf("%c: %d ", (char) j + 'a', az[j]);
            if(az[j] > 0)qtd++;
        }
        //printf("\n");
        
        if(qtd == 26){
            printf("frase completa\n");
        }else if(qtd >= 13){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}