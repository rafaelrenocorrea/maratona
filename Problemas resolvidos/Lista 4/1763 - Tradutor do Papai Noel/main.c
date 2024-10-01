#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char paises[24][15];
    char traducao[24][23];
    char pais[1024]; // 1 KB
    int flag;

    strcpy(paises[0], "brasil"); strcpy(traducao[0], "Feliz Natal!");
    strcpy(paises[1], "alemanha"); strcpy(traducao[1], "Frohliche Weihnachten!");
    strcpy(paises[2], "austria"); strcpy(traducao[2], "Frohe Weihnacht!");
    strcpy(paises[3], "coreia"); strcpy(traducao[3], "Chuk Sung Tan!");
    strcpy(paises[4], "espanha"); strcpy(traducao[4], "Feliz Navidad!");
    strcpy(paises[5], "grecia"); strcpy(traducao[5], "Kala Christougena!");
    strcpy(paises[6], "estados-unidos"); strcpy(traducao[6], "Merry Christmas!");
    strcpy(paises[7], "inglaterra"); strcpy(traducao[7], "Merry Christmas!");
    strcpy(paises[8], "australia"); strcpy(traducao[8], "Merry Christmas!");
    strcpy(paises[9], "portugal"); strcpy(traducao[9], "Feliz Natal!");
    strcpy(paises[10], "suecia"); strcpy(traducao[10], "God Jul!");
    strcpy(paises[11], "turquia"); strcpy(traducao[11], "Mutlu Noeller");
    strcpy(paises[12], "argentina"); strcpy(traducao[12], "Feliz Navidad!");
    strcpy(paises[13], "chile"); strcpy(traducao[13], "Feliz Navidad!");
    strcpy(paises[14], "mexico"); strcpy(traducao[14], "Feliz Navidad!");
    strcpy(paises[15], "antardida"); strcpy(traducao[15], "Merry Christmas!");
    strcpy(paises[16], "canada"); strcpy(traducao[16], "Merry Christmas!");
    strcpy(paises[17], "irlanda"); strcpy(traducao[17], "Nollaig Shona Dhuit!");
    strcpy(paises[18], "belgica"); strcpy(traducao[18], "Zalig Kerstfeest!");
    strcpy(paises[19], "italia"); strcpy(traducao[19], "Buon Natale!");
    strcpy(paises[20], "libia"); strcpy(traducao[20], "Buon Natale!");
    strcpy(paises[21], "siria"); strcpy(traducao[21], "Milad Mubarak!");
    strcpy(paises[22], "marrocos"); strcpy(traducao[22], "Milad Mubarak!");
    strcpy(paises[23], "japao"); strcpy(traducao[23], "Merii Kurisumasu!");

    while(scanf("%s", pais) != EOF){
        flag = 0;

        for(int i = 0; i < 24; i++){
            if(strcmp(paises[i], pais) == 0){
                printf("%s\n", traducao[i]);

                flag++;
            }
        }

        if(flag == 0)
            printf("--- NOT FOUND ---\n");
    }

    return 0;
}