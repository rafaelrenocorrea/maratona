#include <stdio.h>

int main(void){
    char qwerty[47] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=','Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};
    char c;

    while(1){
        c = getchar();

        if(c == EOF)
            break;

        if((c != '`') && (c != 'Q') && (c != 'A') && (c != 'Z') && (c != ' ') && (c != '\n')){
            for(int i = 0; i < 47; i++){
                if(qwerty[i] == c)
                    printf("%c", qwerty[i - 1]);
            }
        }else printf("%c", c);
        
    }

    return 0;
}