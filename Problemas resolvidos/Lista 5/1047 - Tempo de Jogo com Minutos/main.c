#include <stdio.h>

int main(void){
  int hi, mi, hf, mf;
  int h, m;
  
  scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
  
  hi *= 60;
  hi += mi;
  hf *= 60;
  hf += mf;
  
  if(hi < hf){
    h = (hf - hi);
  
    m = h % 60;
    
    h /= 60;
  }else{
    h = hf + (1440 - hi);
    
    m = h % 60;
    
    h /= 60;
  }
  
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

  return 0;
}
