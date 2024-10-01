#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i, aux;
  int *vet; // reservas dos bancos
  int b, n;
  int d, c, v;
  
  while(1){
    scanf("%d %d", &b, &n);
    if(b == 0 && n == 0)
      break;
    
    vet = (int*) malloc(sizeof(int) * b);
    
    for(i = 0; i < b; i++)
      scanf("%d", &vet[i]);

    for(i = 0; i < n; i++){
      scanf("%d %d %d", &d, &c, &v);
      
      vet[d - 1] -= v;

      vet[c - 1] += v;
    }

    aux = 0;
    for(i = 0; i < b; i++){
      if(vet[i] < 0){
        aux++;
        
        break;
      }
    }
    
    if(aux == 0){
      printf("S\n");
    }else
      printf("N\n");
    
    free(vet);
  }

  return 0;
}