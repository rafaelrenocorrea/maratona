#include <stdio.h>
#include <stdlib.h> // atoi()
#include <string.h> // strtol()

int main(void){
    char input[12]; // valor máximo: 2^31 ou -2^31
    int num;

    while(1){
        scanf("%s", input);

        if(
           input[0] == '0' &&
           input[1] == 'x'
          ){
                // converte p/ decimal
                int num = (int) strtol(input, NULL, 16);
                if(num < 0)break;

                printf("%d\n", num);
           }else{
                // converte p/ hexadecimal
                int num = atoi(input);
                if(num < 0)break;

                printf("0x%X\n", num);
           }
    }

    return 0;
}