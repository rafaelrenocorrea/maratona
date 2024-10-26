#include <stdio.h>

int main(void){
  int n, d, maior;
  scanf("%d", &n);
  
  scanf("%d", &d);
  maior = d;
  for(int i = 1; i < n; i++){
    scanf("%d", &d);
    if(d > maior)maior = d;
  }
  
  printf("%d\n", maior + 1);
  
  return 0;
}
