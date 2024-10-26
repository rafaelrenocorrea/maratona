#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *vet;
  int n, menor, j;
  
  scanf("%d", &n);
  
  vet = (int*) malloc(sizeof(int) * n);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
     
    if(i > 0){
      if(vet[i] < menor){
        menor = vet[i];
        
        j = i + 1;
      }
    }else{
      menor = vet[i];
      
      j = i + 1;
    }
  }

  printf("%d\n", j);

  free(vet);

  return 0;
}
