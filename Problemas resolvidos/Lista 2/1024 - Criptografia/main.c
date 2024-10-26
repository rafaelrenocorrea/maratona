#include <stdio.h>
#include <ctype.h>

int main(void){
  int n;
  int i, j, k;
  int qtd;
  char vet[1001];
  char aux[1001];
  char c;
  
  scanf("%d", &n);
  getchar();
  
  for(i = 0; i < n; i++){
    qtd = 0;
    while(1){
      c = getchar();
      if(c == '\n' || c == EOF)
        break;
      
      if(isalpha(c))
        c += 3; // desloca 3 posições para a direita
      
      vet[qtd] = c;
      
      qtd++;
    }
    vet[qtd] = '\0'; // é string
    
    k = 0;
    for(j = (qtd - 1); j >= 0; j--){
      aux[k] = vet[j];
      
      k++;
    }
    aux[k] = '\0'; // é string
    
    for(k = (qtd / 2); k < qtd; k++)
      aux[k]--; // desloca 1 posição para a esquerda
    
    printf("%s\n", aux);
  }

  return 0;
}
