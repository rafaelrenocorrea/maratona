#include <stdio.h>

int main(void){
  int n, x;
  int vet[2000];
  for(int i = 0; i < 2000; i++){
    vet[i] = 0;
  }
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &x);
    
    vet[x - 1]++;
  }
  
  for(int i = 0; i < 2000; i++){
    if(vet[i] > 0){
      printf("%d aparece %d vez(es)\n", i + 1, vet[i]);
    }
  }

  return 0;
}
