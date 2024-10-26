#include <stdio.h>

int main(void){
  int p, n, q;
  float t = 0;
  
  scanf("%d", &p);
  
  for(int i = 0; i < p; i++){
    scanf("%d", &n);
    scanf("%d", &q);
    
    switch(n){
      case 1001:
        t += (1.50 * q);
      
        break;
        
      case 1002:
        t += (2.50 * q);
      
        break;
        
      case 1003:
        t += (3.50 * q);
        
        break;
        
      case 1004:
        t += (4.50 * q);
        
        break;
        
      case 1005:
        t += (5.50 * q);
        
        break;
    }
  }
  
  printf("%.2f\n", t);

  return 0;
}
