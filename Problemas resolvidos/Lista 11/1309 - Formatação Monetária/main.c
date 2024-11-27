#include <stdio.h>
#include <string.h>

int main(void){
    char num[10];

    while(scanf("%s", num) != EOF){
        printf("$");

        for(int i = 0; i < strlen(num); i++){
            if(i > 0 && (strlen(num) - i) % 3 == 0)printf(",");

            printf("%c", num[i]);
        }
        printf(".");

        scanf("%s", num);

        if(strlen(num) == 2){
            printf("%s\n", num);
        }else{
            printf("0%s\n", num);
        }
    }

    return 0;
}