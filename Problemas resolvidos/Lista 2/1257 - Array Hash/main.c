#include <stdio.h>

int main(void){
  int n, l, aux, res;
  char c;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &l);
    
    getchar();
    
    res = 0;
    for(int j = 0; j < l; j++){
      aux = 0;
      while(1){
        c = getchar();
        if(c != '\n' && c != EOF){        
          res += ((c - 65) + j + aux);
          
          aux++;
        }else break;
      }
      
      //printf("\n");
    }
    
    printf("%d\n", res);
  }
  
  return 0;
}
