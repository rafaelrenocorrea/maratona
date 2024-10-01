#include <stdio.h>
#include <stdlib.h> // atoi()
#include <string.h>

int main(void){
    char A[10], B[10];

    while(1){
        scanf("%s %s", A, B);
        if(strcmp(A, "0") == 0 && strcmp(B, "0") == 0){
            break;
        }

        int qtd = 0;
        int carry = 0;
        int i = strlen(A) - 1;
        int j = strlen(B) - 1;
        
        while(i >= 0 || j >= 0){
            int a = (i >= 0) ? A[i] - '0' : 0; // se i >= 0, a = A[i] - '0'. se não, a = 0;
            int b = (j >= 0) ? B[j] - '0' : 0;
            
            int soma = a + b + carry;
            
            if(soma >= 10){
                qtd++;
                
                carry = 1; // indica que carregou 1 para a próxima soma
            }else{
                carry = 0;
            }
            
            i--;
            j--;
        }

        if(qtd > 1){
            printf("%d carry operations.\n", qtd);
        }else if(qtd == 1){
            printf("%d carry operation.\n", qtd);
        }else{
            printf("No carry operation.\n");
        }
    }

    return 0;
}
