#include <stdio.h>

int main(void){
  int n, qtd;
  char c;
  
  scanf("%d", &n);
  
  getchar();
  
  for(int i = 0; i < n; i++){
    qtd = 0;
    
    while(1){
      c = getchar();
      
      if(c != '\n' && c != EOF){
        switch(c){
          case '0':
            qtd += 6;
            
            break;
            
          case '1':
            qtd += 2;
          
            break;
            
          case '2':
            qtd += 5;
          
            break;
            
          case '3':
            qtd += 5;
          
            break;
            
          case '4':
            qtd += 4;
          
            break;
            
          case '5':
            qtd += 5;
          
            break;
            
          case '6':
            qtd += 6;
          
            break;
            
          case '7':
            qtd += 3;
            
            break;
            
          case '8':
            qtd += 7;
          
            break;
            
          case '9':
            qtd += 6;
          
            break;
        }
      }else break;
    }
    
    printf("%d leds\n", qtd);
  }

  return 0;
}
