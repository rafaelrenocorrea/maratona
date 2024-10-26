#include <stdio.h>

int main(void){
  int H, Z, L;
  int vet[3];
  int aux;
  
  scanf("%d %d %d", &H, &Z, &L);
  vet[0] = H; vet[1] = Z; vet[2] = L;
  
  for(int i = 0; i < 3; i++){
    for(int j = 1; j < 3; j++){
      if(vet[j] < vet[j - 1]){
        aux = vet[j];
        vet[j] = vet[j - 1];
        vet[j - 1] = aux;
      }
    }
  }
  
  if(H == vet[1]){
    printf("huguinho\n");
  }else if(Z == vet[1]){
    printf("zezinho\n");
  }else printf("luisinho\n");
  
  return 0;
}
