#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isvogal(char letter){
    if(
       tolower(letter) == 'a' ||
       tolower(letter) == 'e' ||
       tolower(letter) == 'i' ||
       tolower(letter) == 'o' ||
       tolower(letter) == 'u'
    ){
        return true;
    }else{
        return false;
    }
}

int main(void){
    char str[51], inv[51];

    scanf("%s", str);

    int i, j = 0;
    for(i = strlen(str) - 1; i >= 0; i--){
        if(isvogal(str[i]) == true){
            inv[j] = str[i];

            j++;
        }
    }
    inv[j] = '\0';

    bool flag = true;
    j = 0;
    for(i = 0; i < strlen(str); i++){
        if(isvogal(str[i]) == true){
            if(str[i] != inv[j])flag = false;

            j++;
        }
    }

    if(flag){
        printf("S\n");
    }else printf("N\n");

    return 0;
}