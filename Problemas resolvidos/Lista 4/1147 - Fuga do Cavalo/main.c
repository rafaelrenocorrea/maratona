#include <stdio.h>

int main(void){
    int cont = 1; // contador
    int v; char h; // coordenadas de entrada
    int y, x; // coordenadas nas matrizes
    int cavalo[8][8]; // matriz de posições onde o cavalo pode atacar
    int peoes[8][8]; // matriz de posições onde os peões podem atacar
    int mov;

    while(1){
        // zera as matrizes
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cavalo[i][j] = 0;
                peoes[i][j] = 0;
            }
        }
        //

        // lê o cavalo
        scanf("%d", &v);
        if(v == 0){
            break;
        }
        scanf(" %c", &h);

        // 1º movimento
        y = v; x = h - ('a' - 1);
        y -= 2; x -= 1;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }

        // 2º movimento
        y = v; x = h - ('a' - 1);
        y -= 2; x += 1;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }

        // 3º movimento
        y = v; x = h - ('a' - 1);
        y -= 1; x += 2;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }

        // 4º movimento
        y = v; x = h - ('a' - 1);
        y += 1; x += 2;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }

        // 5º movimento
        y = v; x = h - ('a' - 1);
        y += 2; x += 1;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }

        // 6º movimento
        y = v; x = h - ('a' - 1);
        y += 2; x -= 1;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }

        // 7º movimento
        y = v; x = h - ('a' - 1);
        y += 1; x -= 2;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }

        // 8º movimento
        y = v; x = h - ('a' - 1);
        y -= 1; x -= 2;
        if((y > 0 && x > 0) && (y < 9 && x < 9)){
            cavalo[y - 1][x - 1]++;
        }
        //

        // lê os peões
        for(int i = 0; i < 8; i++){
            scanf("%d %c", &v, &h);

            y = v; x = h - ('a' - 1);
            y -= 1; x -= 1;
            if((y > 0 && x > 0) && (y < 9 && x < 9)){
                peoes[y - 1][x - 1]++;
            }

            y = v; x = h - ('a' - 1);
            y -= 1; x += 1;
            if((y > 0 && x > 0) && (y < 9 && x < 9)){
                peoes[y - 1][x - 1]++;
            }
        }
        //

        // verifica os movimentos válidos
        mov = 0;

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(cavalo[i][j] > 0){
                    if((cavalo[i][j] + peoes[i][j]) > 1){
                        // o cavalo morre
                    }else{
                        mov++;
                    }
                } 
            }
        }
        //

        printf("Caso de Teste #%d: %d movimento(s).\n", cont, mov);

        cont++;
    }

    return 0;
}
