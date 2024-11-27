#include <stdio.h>

int main(void){
  int x1, y1, x2, y2; // coordenadas da fazenda
  int mx, my, Mx, My; // menor x, menor y, maior x, maior y
  int x, y; // coordenadas do meteorito
  int i = 1, n;
  int qtd;
  
  while(1){
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)break;
    
    if(x1 > x2){
      Mx = x1;
      mx = x2;
    }else{
      mx = x1;
      Mx = x2;
    }
    
    if(y1 > y2){
      My = y1;
      my = y2;
    }else{
      my = y1;
      My = y2;
    }
    
    scanf("%d", &n);
    
    qtd = 0;
    for(int j = 0; j < n; j++){
      scanf("%d %d", &x, &y);
      
      if((x >= mx && x <= Mx) && (y >= my && y <= My))qtd++;
    }
    printf("Teste %d\n", i);
    printf("%d\n", qtd);
    
    i++;
  }

  return 0;
}
