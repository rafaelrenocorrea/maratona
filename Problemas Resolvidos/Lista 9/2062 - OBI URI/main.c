#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    char str[21];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", str);
        
        if(strlen(str) == 3){ // OBI ou URI
            if(
                str[0] == 'O' && str[1] == 'B' ||
                str[0] == 'U' && str[1] == 'R'
              ){
                str[2] = 'I';
            }
        }

        printf("%s", str);

        if(i < n - 1){
            printf(" ");
        }else{
            printf("\n");
        }
    }

    return 0;
}