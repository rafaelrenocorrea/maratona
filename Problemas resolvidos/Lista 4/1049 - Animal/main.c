#include <stdio.h>
#include <string.h>

int main(void){
    char str[12];

    scanf("%s", str);

    if(strcmp(str, "vertebrado") == 0){
        scanf("%s", str);

        if(strcmp(str, "ave") == 0){
            scanf("%s", str);

            if(strcmp(str, "carnivoro") == 0){
                printf("aguia\n");
            }else if(strcmp(str, "onivoro") == 0){
                printf("pomba\n");
            }
        }else if(strcmp(str, "mamifero") == 0){
            scanf("%s", str);

            if(strcmp(str, "onivoro") == 0){
                printf("homem\n");
            }else if(strcmp(str, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }else if(strcmp(str, "invertebrado") == 0){
        scanf("%s", str);

        if(strcmp(str, "inseto") == 0){
            scanf("%s", str);

            if(strcmp(str, "hematofago") == 0){
                printf("pulga\n");
            }else if(strcmp(str, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }else if(strcmp(str, "anelideo") == 0){
            scanf("%s", str);

            if(strcmp(str, "hematofago") == 0){
                printf("sanguessuga\n");
            }else if(strcmp(str, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}