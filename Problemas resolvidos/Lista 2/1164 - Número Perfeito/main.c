#include <stdio.h>

int main(void){
  int n, x, aux;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &x);
    
    aux = 0;
    
    for(int j = 1; j < x; j++){
      if(x % j == 0)aux += j;
    }
    
    if(aux == x){
      printf("%d eh perfeito\n", x);
    }else printf("%d nao eh perfeito\n", x);
  }

  return 0;
}
